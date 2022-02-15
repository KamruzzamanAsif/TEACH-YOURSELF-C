#include <stdio.h>
int main()
{
   char a,b,c,d,e,f,g,h;
   
   for ( ; ; ){
       printf("Enter the password:");
       scanf("%c%c%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f,&g,&h);
       if(a=='i'&& b=='i'&& c=='t'&& d=='1'&& e=='2'&& f=='3'&& g=='4'&& h=='5'){
           printf("Key unlocked");
        break;
       }
       else {
      printf("Wrong password, Try again \n ");
       }
     
        }
   
   return 0;
}

