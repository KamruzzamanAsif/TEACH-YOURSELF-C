#include<stdio.h>
#include <string.h>

char *p[][2]={
        "Red delicious", "red",
        "Golden delicious", "golden",
        "Winesap", "red",
        "Gala","reddish orange",
        "Lodi","green",
        "Mutsu", "yellow",
        "Cortland", "red",
        "Jonathan", "red",
        " ", " ",
    };
    
int main ()
{
    int i;
    char apple[80];
    printf("Enter name of apple");
    gets(apple);
    for(i=0; *p[i][0];i++)
    {
        if (!strcmp(apple,p[i][0]))
            printf("%s er color hoilo %s",apple,p[i][1]);
    }
    
    return 0;
}


