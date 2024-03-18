#include<stdio.h>
int fab(int);
int main()
{
	int no;
	printf("\n enter a how much digit you want");
	scanf("%d",&no);
	fab(no);
	return 0;
}
int fab(int n)
{
	int num1=0,num2=1,num3;
	if(n==1)
	{
		printf(" %d ",num1);
		return -1;
	}
	else if(n==2)
	{
		printf(" %d ",num2);
		return -1;
	}
	else
	{
		
			printf(" %d %d",num1,num2);
		while(n!=2)
		{
		//	printf(" %d %d",num1,num2);
			num3=num1+num2;
			num1=num2;
			num2=num3;
			printf(" %d ",num3);
			n--;
		}
		return -1;
	}

}
