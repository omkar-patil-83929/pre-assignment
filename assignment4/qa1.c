#include<stdio.h>
int fact(int n);
int main()
{
	int num;
	printf("\n enter number");
	scanf("%d",&num);
	int facto=fact(num);
	printf("\n factorial of %d is %d:",num,facto);
	return 0;
}
int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

