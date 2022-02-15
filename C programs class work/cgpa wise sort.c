#include <stdio.h>
int main()
{
    char n1[10],n2[10],n3[10];
    int r[3];
    float c[3];
    int i;


    scanf("%s",n1);
    scanf("%s",n2);
    scanf("%s",n3);

    for(i=0;i<3;i++)
    {
        scanf("%d",&r[i]);
    }
     for(i=0;i<3;i++)
    {
        scanf("%f",&c[i]);
    }

    if(c[0]>c[1]&&c[0]>c[2])
    {
      if(c[1]>c[2])
      {
        printf("%f %d %s\n",c[0],r[0],n1);
        printf("%f %d %s\n",c[1],r[1],n2);
        printf("%f %d %s\n",c[2],r[2],n3);
      }
      else
      {
        printf("%f %d %s\n",c[0],r[0],n1);
        printf("%f %d %s\n",c[2],r[2],n3);
        printf("%f %d %s\n",c[1],r[1],n2);
      }

    }

    if(c[1]>c[0]&&c[1]>c[2])
    {
      if(c[0]>c[2])
      {
        printf("%f %d %s\n",c[1],r[1],n2);
        printf("%f %d %s\n",c[0],r[0],n1);
        printf("%f %d %s\n",c[2],r[2],n3);
      }
      else
      {
        printf("%f %d %s\n",c[1],r[1],n2);
        printf("%f %d %s\n",c[2],r[2],n3);
        printf("%f %d %s\n",c[0],r[0],n1);
      }

    }

    if(c[2]>c[0]&&c[2]>c[1])
    {
      if(c[0]>c[1])
      {
        printf("%f %d %s\n",c[2],r[2],n3);
        printf("%f %d %s\n",c[0],r[0],n1);
        printf("%f %d %s\n",c[1],r[1],n2);
      }
      else
      {
        printf("%f %d %s\n",c[2],r[2],n3);
        printf("%f %d %s\n",c[1],r[1],n2);
        printf("%f %d %s\n",c[0],r[0],n1);
      }

    }






    return 0;
}
