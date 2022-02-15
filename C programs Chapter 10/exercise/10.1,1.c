#include<stdio.h>
#include<String.h>
#include<stdlib.h>
#define MAX 100

struct phone_type {
    char name[40];
    int areacode;
    char number[9];
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
        if(!strcmp(name,phone[i].name))
            printf("%s (%d) %s\n ",phone[i].name,phone[i].areacode,phone[i].number);
    }
}
void load(void)
{
    FILE *fp;
    if((fp=fopen("phone","r"))==NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    loc=0;
    while(!feof(fp))
    {
        fscanf(fp,"%s%d%s",&phone[loc].name,&phone[loc].areacode,&phone[loc].number);
        loc++;
    }
    fclose(fp);
}

void save(void)
{
    FILE *fp;
    int i;
    if((fp=fopen("phone","w"))==NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    for(i=0;i<loc;i++)
    {
        fprintf(fp,"%s (%d) %s\n ",phone[i].name,phone[i].areacode,phone[i].number);
    }
    fclose(fp);
}









