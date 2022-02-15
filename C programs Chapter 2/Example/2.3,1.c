#include <stdio.h>

int main (void)
{
    float num;
    int choice;
    printf (" 1: Feet to Meters,2: Meters to Feet . ");
    printf ("\nEnter choice: ");
    scanf ("%d", &choice);
    
    if(choice == 1) {
    printf ("Enter number of feet:");
    scanf("%f",&num);
    printf("\nMeters: %f", num / 3.28);
    }


    else {
    printf("Enter the number of meters: ");
    scanf("%f", &num);
    printf("\nFeet: %f", num* 3.29);
    }
    
    return 0;
}
   
  
 
    