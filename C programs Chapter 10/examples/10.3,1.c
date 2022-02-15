#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define MAX 100

int menu(void);
void display(int t);
void author_search(void);
void title_search(void);
void enter(void);
void save(void);
void load(void);

struct book_type {
    unsigned date;
    unsigned char ed;
    unsigned pages;
};
    
struct catalog {
      char name[80];
      char title[80];
      char pub[80];
      unsigned date;
      struct book_type book;
}cat[MAX];

int top=0;

int main ()
{
    int choice;
    load();
    do{
        choice=menu();
        switch (choice)
            {
                case 1: enter();
                        break;
                case 2: author_search();
                        break;
                case 3: title_search();
                        break;
                case 4: save();

            } }while (choice!=5);
    return 0;
}
//return a menu selection
int menu(void)
{
    int i;
    char str[80];
    printf("Card catalog\n\t1.Enter\n\t2.Search by author\n\t3.Search by title\n\t4.Save catalog\n\t5.Quit\n");
    do{
        printf("Choose your selection:");
        gets(str);
        i=atoi(str);
        printf("\n");
    } while(i<1||i>5);
    return i;
}
//enter books into database
void enter(void)
{
   int i;
   char temp[80];
   for(i=top;i<MAX;i++)
   {
       printf("\nEnter author name (enter to quit):");
       gets(cat[i].name);
       if(!*cat[i].name) break;
       printf("\nEnter title:");
       gets(cat[i].title);
       printf("\nEnter publisher:");
       gets(cat[i].pub);
       printf("\nEnter copyright date:");
       gets(temp);
       cat[i].book.date=(unsigned ) atoi(temp);
       printf("\nEnter edition:");
       gets(temp);
        cat[i].book.ed=(unsigned char) atoi(temp);
        printf("\nEnter number of pages:");
       gets(temp);
        cat[i].book.pages=(unsigned) atoi(temp);

   }
   top=i;
}
//search by author
void author_search()
{
    char name[80];
    int i,found;
    printf("Name:");
    gets(name);
    found=0;
    for(i=0;i<top;i++)
    {
        if(!strcmp(name,cat[i].name))
        {
            display(i);
            found=1;
            printf("\n");
        }
    }
    if(!found) printf("Not found\n");
}
//search by title
void title_search ()
{
    char title[80];
    int i,found;
    printf("Title:");
    gets(title);
    found=0;
    for(i=0;i<top;i++)
    {
        if(!strcmp(title,cat[i].title))
        {
            display(i);
            found=1;
            printf("\n");
        }
    }
    if(!found) printf("Not found\n");
}
//display catalog entry
void display(int i)
{
    printf("%s\n",cat[i].title);
    printf("by %s\n",cat[i].name);
    printf("Published by %s\n",cat[i].pub);
    printf("Copyright %u, %u edition\n",cat[i].book.date,cat[i].book.ed);
    printf("Pages: %u\n",cat[i].book.pages);
}

void load(void)
{
    FILE *fp;
    if((fp=fopen("catalog","rb"))==NULL)
    {
        printf("Catalog file not on disk.\n");
        return;
    }

if(fread(&top,sizeof top,1,fp)!=1)
{
    printf("Error reading count.\n");
    exit(1);
}
    if(fread(cat, sizeof cat,1,fp)!=1)
    {
        printf("Error reading catalog data\n");
        exit(1);
    }

    fclose(fp);
}

void save()
{
    FILE *fp;
    if((fp=fopen("catalog","wb"))==NULL)
    {
        printf("Cannot open catalog file.\n");
        exit(1);
    }
    if(fwrite(&top, sizeof top,1,fp)!=1)
    {
        printf("Error writing count.\n");
        exit(1);
    }
     if(fwrite(cat, sizeof cat,1,fp)!=1)
        {
        printf("Error writing catalog data.\n");
        exit(1);
    }
    fclose(fp);
}

