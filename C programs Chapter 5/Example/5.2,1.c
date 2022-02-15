#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80],str2[80];
    int i;
    
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    
    //see how long the string are
    printf("%s is %d chars long\n", str1,strlen(str1));
    printf("%s is %d chars long\n", str2,strlen(str2));
    
    //compare the strings
    i=strcmp(str1,str2);
    if(!i) printf("The strings are equal.\n");
    else if(i<0) printf("%s is less than %s\n",str1,str2);
    else  printf("%s is less than %s\n",str2,str1);
    
    //concatenate str2 to end of str1 if there is enough room
    if(strlen(str1)+strlen(str2) < 80)
    {
        strcat(str1,str2);
        printf("%s\n",str1);
    }
    
    //copy str2 to str2
    strcpy(str1,str2);
    printf("%s %s\n",str1,str2);

    return 0;
}
