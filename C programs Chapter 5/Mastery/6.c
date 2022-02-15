#include <stdio.h>
#include<string.h>

char d[][2][40]={
    "house", "where you live",
    "car", "what you drive",
    "chair", "where you sit",
    "ball", "round object for playing",
    "food", "what you eat"};
    
int main()
{
    char word[80];
    int i;
    gets(word);
    for(i=0;strcmp(d[i][0],"");i++)
    {
        if(!strcmp(d[i][0],word))
        {
            printf("\n meaning is %s",d[i][1]);
            break;
        }
    }
    if(!strcmp(d[i][0],""))
        printf("\n word doesnt exist in dictionary");
        
    return 0;
}