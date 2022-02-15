#include <stdio.h>

int main()
{
    int a,b,c,r,x;
    char m,n;
    for( ; ; ){
        printf("Enter operators & operands:");
        scanf("%d%c%d%c%d",&a,&m,&b,&n,&c);
        if(m=='+'&&n=='+'){
            r=a+b;
            printf("answer is:%d",r+c);
        }    
        else if(m=='+'&&n=='-'){
            r=a+b;
            printf("answer is:%d",r-c);
        }
        else if(m=='+'&&n=='*'){
            r=a+b;
            printf("answer is:%d",r*c);
        }
       else if(m=='+'&&n=='/'){
            r=a+b;
            printf("answer is:%d",r/c);
       }
        else if(m=='-'&&n=='+'){
            r=a-b;
            printf("answer is:%d",r+c);
        }
        else if(m=='-'&&n=='-'){
            r=a-b;
            printf("answer is:%d",r-c);
        }
        else if(m=='-'&&n=='*'){
            r=a-b;
            printf("answer is:%d",r*c);
        }
        else if(m=='-'&&n=='/'){
            r=a-b;
            printf("answer is:%d",r/c);
        }
        else if(m=='*'&&n=='+'){
            r=a*b;
            printf("answer is:%d",r+c);
        }
        else if(m=='*'&&n=='-'){
            r=a*b;
            printf("answer is:%d",r-c);
        }
        else if(m=='*'&&n=='*'){
            r=a*b;
            printf("answer is:%d",r*c);
        }
        else if(m=='*'&&n=='/'){
            r=a*b;
            printf("answer is:%d",r/c);
        }
        else if(m=='/'&&n=='+'){
            r=a/b;
            printf("answer is:%d",r+c);
        }
        else if(m=='/'&&n=='-'){
            r=a/b;
            printf("answer is:%d",r-c);
        }
        else if(m=='/'&&n=='*'){
            r=a/b;
            printf("answer is:%d",r*c);
        }
        else if(m=='/'&&n=='/'){
            r=a/b;
            printf("answer is:%d",r/c);
        }
        else 
        printf("Wrong input");
        printf("\nDo you want to contine?\nIf so press 1\n");
        scanf("%d",&x);
        if(x!=1)
        break;   
      
    }
    return 0;
}

