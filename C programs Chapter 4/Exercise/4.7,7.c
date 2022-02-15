 #include<stdio.h>

int series(int x);
int main()
{
	int a,b;
	
	printf("Enter number:");
	scanf("%d",&a);
	
	b=series(a);
	
	printf("%d",b);
}
	
	int series(int x)
	{
		int a;
		a=(x*1468)%467;
		
		return a;
		
	}