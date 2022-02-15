#include <stdio.h>

int main(void)
{
    char text[80]={
        "When", "in", "the",
        "course", "of", "human",
        "events", ""
    };
    
    int i,j;
    
    //now display them
    for(i=0;text[i][0];i++)
    {
        for(j=0;text[i][j];j++)
        {
            printf("%c",text[i][j]);
            printf(" ");
        }
    }
    
    
    return 0;
}
