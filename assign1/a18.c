#include<stdio.h>
int main()
{
	int a,b,c;
	float avg;
	printf("\n Enter first number");
	scanf("%d",&a);

	printf("\n Enter second number");
	scanf("%d",&b);

	printf("\n Enter third  number");
	scanf("%d",&c);
	avg=(float) ((a+b+c)/3);
//	printf("\n average is %f",(float)((a+b+c)/3));
	printf("avg is %f",avg);
	return 0;
}
