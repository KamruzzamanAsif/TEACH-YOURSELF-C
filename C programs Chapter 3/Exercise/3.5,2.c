#include<stdio.h>
int main()
{
    int choice;

    printf("Mailing list menu:\n\n");

    printf("1.Enter addresses.\n");
    printf("2.Delele addresses.\n");
    printf("3.Search the list.\n");
    printf("4.Print the list.\n");
    printf("5.Quit\n");

    do{
        printf("Enter the number of the choice (1-5):");
        scanf("%d",&choice);
      }while(choice<1||chpoice>5);

      return 0;


}
