#include<stdio.h>
int main()
{
    char ch;
    int digit,punc,letter;

    printf("enter charecter ,enter to stop");

    digit=0;
    punc=0;
    letter=0;

    do{
        ch=getchar();
        switch(ch){
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        digit++;
        break;
        case '.':
        case ',':
        case '?':
        case '!':
        case ':':
        case ';':
        punc++;
        break;
        default:
        letter++;
        }
        }while(ch!='\r');
        printf("\ndigit=%d\n",digit);
        printf("Punctuation:=%d\n",punc);
        printf("letter :=%d\n",letter);


        return 0;





        }














