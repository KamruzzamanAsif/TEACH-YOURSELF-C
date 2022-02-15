#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int menu(void);
void display(int i);
void author_search(void);
void title_search(void);
void enter(void);
void save(void);
void load(void);

char names[MAX][80]; // author names
char titles[MAX][80]; // titles
char pubs[MAX][80]; // publishers

int top = 0; // last location used

int main(void)
{
    int choice;
    load(); // read in catalog

    do{
        choice = menu();
        switch(choice){
            case 1: enter(); // enter books
                break;
            case 2: author_search(); // search by author
                break;
            case 3: title_search(); // search by title
                break;
            case 4: save();
        }
    }while(choice!=5);

    return 0;
}

// return  a menu selection
int menu(void)
{
    int i;
    char str[80];

    printf("Card Catalog:\n");
    printf(" 1. Enter\n");
    printf(" 2. Search by author\n");
    printf(" 3. Search by title\n");
    printf(" 4. Save catalog\n");
    printf(" 5. Quit\n");

    do{
        printf("Choose your selection: ");
        gets(str);
        i = atoi(str);
        printf("\n");
    }while(i<1 || i>5);

    return i;
}

// Enter books into database
void enter(void)
{
    int i;

    for(i=top; i<MAX; i++){
        printf("Enter author name (Enter to quit) : ");
        gets(names[i]);
        if(! *names[i]) break;
        printf("Enter title: ");
        gets(titles[i]);
        printf("Enter publisher: ");
        gets(pubs[i]);
    }
    top = i;
}

// Search by author
void author_search(void)
{
    char name[80];
    int i, found;

    printf("Name: ");
    gets(name);

    found = 0;
    for(i=0; i<top; i++)
    {
        if(!strcmp(name,names[i]))
        {
            display(i);
            found = 1;
            printf("\n");
        }
        if(!found) printf("Not found\n");
    }
}

// Search by title
void title_search(void)
{
    char title[80];
    int i, found;

    printf("Title: ");
    gets(title);

    found = 0;
    for(i=0; i<top; i++)
    {
        if(!strcmp(title,titles[i]))
        {
            display(i);
            found = 1;
            printf("\n");
        }
        if(!found) printf("Not found\n");
    }
}

// Display catalog entry
void display(int i)
{
    printf("%s\n",titles[i]);
    printf("by %s\n",names[i]);
    printf("Published by %s\n",pubs[i]);
}

// Load the catalog file
void load(void)
{
    FILE *fp;

    if((fp=fopen("catalog","r"))==NULL)
    {
        printf("Catalog file not on disk.\n");
        return;
    }

    fread(&top, sizeof top, 1, fp); // read count
    fread(names, sizeof names, 1, fp);
    fread(titles, sizeof titles, 1, fp);
    fread(pubs, sizeof pubs, 1, fp);

    fclose(fp);
}

// Save the catalog file
void save(void)
{
    FILE *fp;

    if((fp=fopen("catalog","w"))==NULL)
    {
        printf("Cannot open Catalog file.\n");
        exit(1);
    }

    fwrite(&top, sizeof top, 1, fp);
    fwrite(names, sizeof names, 1, fp);
    fwrite(titles, sizeof titles, 1, fp);
    fwrite(pubs, sizeof pubs, 1, fp);

    fclose(fp);
}