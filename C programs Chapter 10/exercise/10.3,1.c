#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define MAX 100

struct address{
    char street[40];
    char city[40];
    char state[3];
    char zip[12];
};

struct phone_type {
    char name[40];
    int areacode;
    char number[9];
    struct address addr;
}phone[MAX];

int loc=0;
int menu(void);
void load(void);
void save(void);
void find(void);

int main ()
{
    int choice;
    do{
        choice=menu();
        switch(choice) {
        case 1: enter();
                break;
        case 2: find();
                break;
        case 3: save();
                break;
        case 4: load();
        }
    } while(choice!=5);
    return 0;
}

int menu(void)
{
    int i;
    char str[80];
    printf("1. Enter name and numbers\n2.Find numbers\n3.Save directory to disk\n4.Load directory from disk\n5.Quit\n");
    do{
        printf("Enter your choice:");
        gets(str);
        i=atoi(str);
    }while(i<1 || i>5);
    return i;
}

void enter(void)
{
    char temp[80];
    for(; loc<100;loc++)
    {
        if(loc<100)
        {
            printf("Enter name:");
            gets(phone[loc].name);
            if(!*phone[loc].name) break;
            printf("\nEnter area code:");
            gets(temp);
            phone[loc].areacode=atoi(temp);
            printf("\nEnter number:");
            gets(phone[loc].number);

            printf("\nEnter Street address:");
            gets(phone[loc].addr.street);
            printf("\nEnter city:");
            gets(phone[loc].addr.city);
            printf("\nEnter State:");
            gets(phone[loc].addr.state);
            printf("\nEnter zip code:");
            gets(phone[loc].addr.zip);
            }
    }
}
void find(void)
{
    char name[80];
    int i;
    printf("Enter name:");
    gets(name);
    if(!*name) return;
    for(i=0;i<100;i++)
    {
        if(!strcmp(name,phone[i].name)) {
            printf("%s (%d) %s\n ",phone[i].name,phone[i].areacode,phone[i].number);
            printf("%s\n %s %s %s\n ",phone[i].addr.street,phone[i].addr.city,phone[i].addr.state,phone[i].addr.zip);
        }
    }
}
void load(void)
{
    FILE *fp;
    if((fp=fopen("phone","rb"))==NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    loc=0;
    while(!feof(fp))
    {
        fread(&phone[loc],sizeof phone[loc],1,fp);
        loc++;
    }
    fclose(fp);
}

void save(void)
{
    FILE *fp;
    int i;
    if((fp=fopen("phone","wb"))==NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    for(i=0;i<loc;i++)
    {
        fwrite(&phone[loc],sizeof phone[i],1,fp);
    }
    fclose(fp);
}









