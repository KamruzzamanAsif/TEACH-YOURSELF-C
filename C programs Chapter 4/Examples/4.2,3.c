#include<stdio.h>

int series(void); //wrong return type
int main(){
    int i;

    for(i=0;i<10;i++) printf("%d",series());

    return 0;
}

int series(void){


    int total;

    total=(total+1423)%1422;

    return total;

    }