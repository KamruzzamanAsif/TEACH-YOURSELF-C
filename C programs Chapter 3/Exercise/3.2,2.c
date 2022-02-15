#include<stdio.h>
int main()
{
    char ch;
    int s1,s2;
    float radious;

    printf("Enter C to compute area of circle ,S for squre ,T for triangle?");
    ch=getchar();
    printf("\n");

    if(ch=='C'){
        printf("Enter radius of circle:");
        scanf("%f",&radious);
        printf("area is=%f",3.1416*radious*radious);

        }

        else if(ch='S'){
        printf("Enter length of first side");
        scanf("%d",&s1);
        printf("Enter lenght of second side");
        scanf("%d",&s2);
        printf("area is=%d",s1*s2);

        }

        else if(ch='T'){
        printf("Enter ienght of base ");
        scanf("%d",&s1);
        printf("Enter height");
        scanf("%d",&s2);
        printf("area is=%d",(s1*s2)/2);


        }
  return 0;

}
