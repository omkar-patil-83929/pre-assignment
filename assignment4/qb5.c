#include<stdio.h>
int  binary(int);
int main()
{
	int num;
	printf("\n enter number");
	scanf("%d",&num);
	binary(num);
	return 0;
}
int  binary(int n)
{
	int rem;
	if(n==0)
		return 1;
	else
		rem=n%2;
//		n=n/2;
//		printf(" %d ",rem);
		binary(n/2);
	printf("  %d ",rem);
}

	

	
		
	
