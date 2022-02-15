 #include <stdio.h>
 #define std 33 // no. of students

    struct student{
        int roll[33];
        int marks[6];
        float gpa[6];
        float cgpa[6];
    };

int main()
{
    FILE *f;
    struct student students[100];
    int i,j,x=0;

    if((f=fopen("file1.txt","r"))==NULL)
    printf("Not detected");
    else
    {
        fscanf(f, "%*[^\n]");
        for(i=0;i<std;i++)
        {
            fscanf(f,"%d",&students[i].roll[i]);
            for(j=0;j<6;j++)
            {
                fscanf(f,"%d",&students[i].marks[j]);
            }
        }
    }

    fclose(f);

    for(i=0;i<std;i++)
    {
        for(j=0;j<6;j++)
        {
            if(80<=students[i].marks[j] && students[i].marks[j]<=100)
            students[i].gpa[j]=4.00;
            else if(75<=students[i].marks[j] && students[i].marks[j]<80)
            students[i].gpa[j]=3.75;
            else if(70<=students[i].marks[j] && students[i].marks[j]<75)
            students[i].gpa[j]=3.50;
            else if(65<=students[i].marks[j] && students[i].marks[j]<70)
            students[i].gpa[j]=3.25;
            else if(60<=students[i].marks[j] && students[i].marks[j]<65)
            students[i].gpa[j]=3.00;
            else if(55<=students[i].marks[j] && students[i].marks[j]<60)
            students[i].gpa[j]=2.75;
            else if(50<=students[i].marks[j] && students[i].marks[j]<55)
            students[i].gpa[j]=2.50;
            else if(45<=students[i].marks[j] && students[i].marks[j]<50)
            students[i].gpa[j]=2.25;
            else if(40<=students[i].marks[j] && students[i].marks[j]<45)
            students[i].gpa[j]=2.00;
            else
            students[i].gpa[j]=0.00;
        }
    }

    for(i=0;i<std;i++)
    {
        students[i].cgpa[i]=0;
        for(j=0;j<6;j++)
        {
            students[i].cgpa[i]+=students[i].gpa[j]/6;
        }
    }


    if((f=fopen("file2.txt","w"))==NULL)
    printf("Not detected");
    else
    {
        fprintf(f,"Roll no. CSE101\tCSE102\tSTAT103\tMATH104\tGE105\tSE106\tCGPA");
        for(i=0;i<std;i++)
        {
            fprintf(f,"\n%d",students[i].roll[i]);
            for(j=0;j<6;j++)
            {
                fprintf(f,"\t%7.2f",students[i].gpa[j]);
            }
            fprintf(f,"\t%7.2f",students[i].cgpa[i]);
        }
    }

    return 0;
}