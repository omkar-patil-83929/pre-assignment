#include<stdio.h>
int main()
{
	int num,fact=1;
	printf("\n enter the number");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		printf("%d *",i);
		fact=fact*i;
//		printf("\n fac=%d",fact);
	}
	printf("=%d",fact);

return 0;
}
