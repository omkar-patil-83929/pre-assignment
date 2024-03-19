#include<stdio.h>
void sum_mul(int *,int *);
int res;

int main()
{	int num1,num2;
	printf("\n enter two number");
	scanf("%d%d",&num1,&num2);
	sum_mul(&num1,&num2);
	printf("\n sum is %d and multiplication is %d",num1,num2);
	return 0;
}
void sum_mul(int *a,int *b)
{
	
	res=*a + *b;
	*b=*a * *b;
	*a=res;
}

