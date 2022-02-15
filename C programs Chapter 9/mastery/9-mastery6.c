#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    long i;
    int num;

    if((fp=fopen("rand","rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    printf("Which number (0-99)?");
    scanf("%ld",&i);

    fseek(fp,i * sizeof(int), SEEK_SET);
    fread(&num, sizeof num, 1, fp);
    printf("%d\n",num);

    fclose(fp);

    return 0;
}