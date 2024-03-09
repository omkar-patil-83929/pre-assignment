#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\n enter number");
	scanf("%d",&num1);
	printf("\n enter another number");
	scanf("%d",&num2);
	if(num2==0)
		printf("\n cant divide by zero");
	else
		printf("\n division is %d",num1/num2);
	return 0;
}
