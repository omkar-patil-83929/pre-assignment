#include<stdio.h>
void swap(int *,int *);
int main()
{
	int n1,n2;
	printf("\n enter two number");
	scanf("%d%d",&n1,&n2);
	printf("\n before swap n1=%d and n2=%d",n1,n2);
	swap(&n1,&n2);
	printf("\n after swap n1=%d and n2=%d",n1,n2);
	return 0;
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
