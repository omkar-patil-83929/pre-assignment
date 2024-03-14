#include<stdio.h>
int main()
{
	int n1,n2;
	printf("\nenter first no.");
	scanf("%d",&n1);
	printf("\n enter last No.");
	scanf("%d",&n2);
	for(int i=n1;i<=n2;i++)
	{
		for(int n=1;n<=10;n++)
		{
			printf(" %d\n",n*i);
		}
		printf("\v");
	}
	
		
	return 0;
}

