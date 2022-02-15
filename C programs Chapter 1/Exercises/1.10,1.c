#include <stdio.h>

float compute(float x);

int main() {

	float weight,e_weight;
	printf("Enter your weight:");
	scanf("%f",&weight);
	e_weight=compute(weight);
	printf("Your effective weight on the moon is:%.2f",e_weight);
	return 0;
}

float compute(float x){
	x=x*0.17;
	return x;
}
