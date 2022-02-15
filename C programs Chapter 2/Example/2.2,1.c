#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter an integer: ");
	scanf("%d",&num);
	if(num < 0)
	 	printf("Numberer is negative");
	else 
		printf("Number is non-negative");

return 0;
}
