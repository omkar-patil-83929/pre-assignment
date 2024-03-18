#include<stdio.h>

isprime(int);
isprime_num(int, int);
int main()
{
	int num,n1,n2;
	printf("\n enter a number");
	scanf("%d",&num);
	isprime(num);
	printf("\nenter number  range\n  ");
	scanf("%d %d",&n1,&n2);
	isprime_num(n1,n2);

	return 0;
}
isprime(int num)
{
	int	flag=0;
	for(int i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			flag++;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n %d is prime numbe",num);
	}
	else
	{
		printf("\n %d is not prime number",num);
	}
}
isprime_num(int n1,int n2)
{	int i,j,flag=0;
	for(i=n1;i<=n2;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			printf(" %d ",i);
		}
	}
}
