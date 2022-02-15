#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char command[80], temp[80];
    int i, j;
    
    for( ; ; )
    {
        printf("Operation? ");
        gets(command);
        
        //see if user wants to stop
        if(!strcmp(command,"quit")) break;
        
        printf("Enter the first number:");
        gets(temp);
        i=atoi(temp);
        
        printf("Enter the second number:");
        gets(temp);
        j=atoi(temp);
        
        //now perform the opetation
        if(!strcmp(command,"add"))
        printf("%d\n",i+j);
        else if(!strcmp(command,"struct"))
        printf("%d\n",i-j);
        else if(!strcmp(command,"divide"))
        printf("%d\n",i/j);
        else if(!strcmp(command,"multiply"))
        printf("%d\n",i*j);
        else printf("Unknown command\n");
        
    }
    
    
    
    return 0;
}
