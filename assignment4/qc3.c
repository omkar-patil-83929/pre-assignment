#include<stdio.h>
void cal(int *,int *);
int main()
{
	int n1,n2;
	printf("\n Enter two number");
	scanf("%d%d",&n1,&n2);
//	printf("\n sum is %d");
	cal(&n1,&n2);
	return 0;
}
void cal(int *a,int *b)
{
	printf("\n value of sum	is %d",*a+*b);

	printf("\n value of difference is %d",*a-*b);

	printf("\n value of multiplication is %d",*a * *b);

	if(*b==0)
		printf("\n not divided by zero");
	else
		printf("\n division is %d",*a / *b);
}
		

