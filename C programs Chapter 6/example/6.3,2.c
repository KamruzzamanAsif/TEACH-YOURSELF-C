#include <stdio.h>
#include <string.h>
int main ()
{
    char str[]="Pointers are fun to use";
    char str2[80], *p1,*p2;
    
    // make p to point to the end of str1
    p1=str+strlen(str)-1;
    
    p2=str2;
    
    while(p1>=str)
        *p2++=*p1--;
    
    // null terminate str2
    *p2='\0';
    
    printf("%s %s",str,str2);
    return 0;

}