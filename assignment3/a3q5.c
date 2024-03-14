#include<stdio.h>
int main()
{
	int num,fact=1;
	printf("\N ENTER NUMBER");
	scanf("%d",&num);
	for(int i=num;i>=1;i--)
	{
		printf("%d *",i);
		fact=fact*i;
	}
	printf("=%d",fact);
	return 0;
}
