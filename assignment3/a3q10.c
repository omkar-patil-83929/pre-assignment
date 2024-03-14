#include<stdio.h>
int main()
{
	int num;
	printf("\n enter the number");
	scanf("%d",&num);
	for(int i=1;i<=10;i++)
	{
		printf(" %d\t",i*num);
	}
	printf("\n");
	return 0;
}
