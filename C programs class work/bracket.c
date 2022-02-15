#include <stdio.h>

int main()
{
    int a,b,c,r,x;
    char m,n,s,t,u,v;
    for( ; ; ){
        printf("Enter operators & operands:");
        scanf("%c%d%c%c%d%c%c%d%c",&s,&a,&m,&t,&b,&u,&n,&c,&v);
        if(m=='+'&&n=='+'){
            if(s=='('&&u==')')
            printf("answer is:%d",(a+b)+c);
            else 
            printf("answer is:%d",a+(b+c));
        }    
        else if(m=='+'&&n=='-'){
            if(s=='('&&u==')')
            printf("answer is:%d",(a+b)-c);
            else 
            printf("answer is:%d",a+(b+c));
        }
        else if(m=='+'&&n=='*'){
           if(s=='('&&u==')')
            printf("answer is:%d",(a+b)*c);
            else 
            printf("answer is:%d",a+(b*c));
        }
       else if(m=='+'&&n=='/'){
            if(s=='('&&u==')')
            printf("answer is:%d",(a+b)/c);
            else 
            printf("answer is:%d",a+(b/c));
       }
        else if(m=='-'&&n=='+'){
            if(s=='('&&u==')')
            printf("answer is:%d",(a-b)/c);
            else 
            printf("answer is:%d",a-(b/c));
        }
        else if(m=='-'&&n=='-'){
          if(s=='('&&u==')')
            printf("answer is:%d",(a-b)-c);
            else 
            printf("answer is:%d",a-(b-c));
        }
        else if(m=='-'&&n=='*'){
            if(s=='('&&u==')')
            printf("answer is:%d",(a-b)*c);
            else 
            printf("answer is:%d",a-(b*c));
        }
        else if(m=='-'&&n=='/'){
          if(s=='('&&u==')')
            printf("answer is:%d",(a-b)/c);
            else 
            printf("answer is:%d",a-(b/c));
        }
        else if(m=='*'&&n=='+'){
            if(s=='('&&u==')')
            printf("answer is:%d",(a*b)+c);
            else 
            printf("answer is:%d",a*(b+c));
        }
        else if(m=='*'&&n=='-'){
           if(s=='('&&u==')')
            printf("answer is:%d",(a*b)-c);
            else 
            printf("answer is:%d",a*(b-c));
        }
        else if(m=='*'&&n=='*'){
            if(s=='('&&u==')')
            printf("answer is:%d",(a*b)*c);
            else 
            printf("answer is:%d",a*(b*c));
        }
        else if(m=='*'&&n=='/'){
         if(s=='('&&u==')')
            printf("answer is:%d",(a*b)/c);
            else 
            printf("answer is:%d",a*(b/c));
        }
        else if(m=='/'&&n=='+'){
          if(s=='('&&u==')')
            printf("answer is:%d",(a/b)+c);
            else 
            printf("answer is:%d",a/(b+c));
        }
        else if(m=='/'&&n=='-'){
            r=a/b;
            printf("answer is:%d",r-c);
        }
        else if(m=='/'&&n=='*'){
          if(s=='('&&u==')')
            printf("answer is:%d",(a/b)*c);
            else 
            printf("answer is:%d",a/(b*c));
        }
        else if(m=='/'&&n=='/'){
          if(s=='('&&u==')')
            printf("answer is:%d",(a/b)/c);
            else 
            printf("answer is:%d",a/(b/c));
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

