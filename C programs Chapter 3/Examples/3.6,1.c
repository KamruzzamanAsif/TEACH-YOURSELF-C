#include<stdio.h>

int main()
{
    int answer,count,chances,right;

    for(count=1;count<11;count++){

    printf("Enter the value of %d+%d=?,count,count");
    scanf("%d",&answer);


    if(answer==count+count)
    printf("you are right\n");

    else
    {
    printf("sorry!you are wrong.\ntry again.");

    right=0;

    for(chances=0;chances<3 && !right;chances++)
    {
        printf("what is %d+%d?",count,count);
        scanf("%d",&answer);

        if(answer==count+count){
        printf("You are right\n");
        right=1;
        }


     }

    }
    return 0;
}

}











