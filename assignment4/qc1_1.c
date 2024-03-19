#include<stdio.h>
void sum_mul(int *,int*);
int main()
{
	int n1,n2;
	printf("\n enter two number");
	scanf("%d%d",&n1,&n2);
	sum_mul(&n1,&n2);
	printf("\n sum=%d and mul=%d",n1,n2);
	return 0;
}
void sum_mul(int *a,int *b)
{
	int res;
	res=*a + *b;
	*b=*a * *b;
	*a=res;
}
