#include<stdio.h>
int main()
{
	int num,temp,no,i=2;
	printf("\n enter the number");
	scanf("%d",&num);
	no=num;
	while(no!=1)
	{
		if(no%i==0)
		{
			no=no/i;
			printf("%d * ",i);
			i=1;
			
		}
		i++;
	}
	printf("\b");
	return 0;
}


















