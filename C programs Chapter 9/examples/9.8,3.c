#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10];
    int i;
    
    printf("Enter a string: ");
    fgets(str,10,stdin);
    
    //remove new line, if present
    i=strlen(str)-1;
    if(str[i]=='\n')
        str[i]='\0';
        
    
    printf("This is your string: %s",str);
    
    return 0;
}