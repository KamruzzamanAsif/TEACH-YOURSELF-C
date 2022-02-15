#include <stdio.h>
int main()
{
char n1[10],n2[10],n3[10],n[10];
float c[5];
int r[5],i;

printf("Name:");
gets(n1);
gets(n2);
gets(n3);

printf("Enter roll number:");
for(i=0;i<3;i++)
{
    scanf("%d",&r[i]);
}

printf("Enter CGPA:");
for(i=0;i<3;i++)
{
    scanf("%f",&c[i]);
}
getchar();
printf("Enter a name to be checked:");
gets(n);


if(!strcmp(n,n1))
printf("%s  %d %f",n1,r[0],c[0]);


if(!strcmp(n,n2))
printf("%s  %d %f",n2,r[1],c[1]);


if(!strcmp(n,n3))
printf("%s  %d %f",n3,r[2],c[2]);

return 0;

}
