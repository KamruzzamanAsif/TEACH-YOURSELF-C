#include<stdio.h>
int main()
{
    float i;
    char ch;

    printf("Tip computer\n");


    for(i=1.0;i<101.0;i=i+i){
    printf("%f %f %f %f\n",i,i+i*.1,i+i*.15,i+i*.2);
    printf("More?(Y/N)");
    ch=getchar();

    printf("\n");
    if(ch=='N')
    break;
    }


}
