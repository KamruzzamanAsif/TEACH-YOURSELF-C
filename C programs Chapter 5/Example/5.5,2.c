//English to German translator

#include <stdio.h>
#include <string.h>

char words[][2][40]={
    "dog","Hund",
    "no","nein",
    "year", "Jahr",
    "child", "Kind",
    "I", "Ich",
    "drive", "fahren",
    "house", "Haus",
    "to", "zu",
    "",""
};

int main(void)
{
    char english[80];
    int i;
    
    printf("Enter English word: ");
    gets(english);
    
    //look up the word
    i=0;
    //search while null string  not yet encountered
    while(strcmp(words[i][0],""))
    {
        if(!strcmp(english, words[i] [0]))
        {
            printf("German translation: %s", words[i][1]);
            break;
        }
        i++;
    }
    
    if(!strcmp(words[i][0],""))
    printf("NOt in dictonary\n");
    
    return 0;
}
