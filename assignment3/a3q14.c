#include<stdio.h>
int main()
{
	int num,flag=0;
	printf("\n enter the number");
	scanf("%d",&num);
	for(int i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			flag++;
		}
	}
	if(flag==0)
	{
		printf("\n %d is prime number",num);

	}
	else
	{
		printf("\n %d is not prime number",num);
	}
	return 0;
}
