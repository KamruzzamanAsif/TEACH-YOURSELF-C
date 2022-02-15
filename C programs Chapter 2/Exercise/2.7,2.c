#include<stdio.h>
int main(){

    int room,length,width,height,area,i,s=0;

    printf("Enter number of rooms:");
    scanf("%d",&room);

    for(i=1;i<=room;i++){

        printf("Enter dimensions of room %d in sqrft:",i);
        scanf("%d%d%d",&length,&width,&height);

        area=length*width*height;

        s=s+area;
        }
    printf("Total square footage of house is %d",s);

    return 0;
    }