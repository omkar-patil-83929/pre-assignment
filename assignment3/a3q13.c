#include<stdio.h>
int main()
{
	int n1=1,n2=1,n,i=3,n3;
	printf("\n enter how much term you want");
	scanf("%d",&n);
	if(n==1||n==2)
	{
		printf("\t %d",n1);
		return 0;
	}
	else

	{	printf("%d \t%d",n1,n2);
		while(i<=n)
		{	n3=n1+n2;
			n1=n2;
			n2=n3;
			printf("\t %d",n3);
			i++;
			
		}
	}

	return 0;
}


