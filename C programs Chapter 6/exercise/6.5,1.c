#include <stdio.h>
#include <string.h>

*p[3]={ "Yes", "No", "Maybe. Rephrase the question" }; // global pointer array

int main ()
{
    char str[80];
    printf("Enter your question:\n");
    gets(str);
    
    printf(p[strlen(str)%3]);
    
    return 0;
}
