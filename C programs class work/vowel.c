#include <stdio.h>

int main()
{
    int k;
    char j;
    
    for( ; ; )
    {
        printf("Enter a character:\n");
        scanf("%c",&j);
        getchar();
        switch(j)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            printf("%c is a vowel\n",j);
            default:
            printf("%c is not a vowel",j);
            break;
        }
        printf("\n If you want to stop press 0\n");
        scanf("\n%d",&k);
        if(k==0)
        break;
    
    }
   

    return 0;
}

