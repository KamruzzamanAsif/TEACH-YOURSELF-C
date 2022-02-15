#include <stdio.h>
#include <string.h>

int main()
{
    char s[50],bigstr[5000];
    int i;
    
    for( ; ; )
    {
        gets(s);
        if(strcmp(s,"quit")==0) break;
        if(strlen(s)+strlen(bigstr)>5000)  break;
        strcat(bigstr,s);
        strcat(bigstr,"\n");
    }
    
    printf("%s",bigstr);

    return 0;
}
