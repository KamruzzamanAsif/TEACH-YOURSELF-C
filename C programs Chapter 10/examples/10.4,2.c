#include<stdlib.h>
#include<stdio.h>

struct telemetry {
    unsigned fuel:1;
    unsigned radio:1;
    unsigned tv:1;
    unsigned water:1;
    unsigned food:1;
    unsigned waste:1;
} flt_recd;

void display(struct telemetry i);

int main ()
{
    FILE *fp;
    int i;
    if((fp=fopen("flight","wb"))==NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    for(i=0;i<100;i++)
    {
        flt_recd.fuel=rand()%2;
        flt_recd.radio=rand()%2;
        flt_recd.tv=rand()%2;
        flt_recd.water=rand()%2;
        flt_recd.food=rand()%2;
        flt_recd.waste=rand()%2;

        display(flt_recd);
        fwrite(&flt_recd, sizeof flt_recd,1,fp);
    }
    fclose(fp);
    return 0;
}
void display(struct telemetry i)
{
    if(i.fuel) printf("Fuel ok\n");
    else printf("Fuel low\n");
    if(i.radio) printf("Radio ok\n");
    else printf("Radio failure\n");
    if(i.tv) printf("TV system ok\n");
    else printf("TV malfunction\n");
    if(i.water) printf("Water supply ok\n");
    else printf("Water supply low\n");
    if(i.food) printf("Food supply ok\n");
    else printf("Food supply low\n");
    if(i.waste) printf("Waste containment ok\n");
    else printf("Waste containment failure\n");
    printf("\n");
}