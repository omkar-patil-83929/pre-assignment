#include<stdio.h>
void  hex(int);
int main()
{
	int num;
	printf("\n enter number");
	scanf("%d",&num);
	hex(num);
	return 0;
}
void  hex(int n)
{
	int rem;
	if(n==0)
		return 1;
	else
		rem=n%16;
//		n=n/2;
//		printf(" %d ",rem);
		hex(n/16);
	printf("  %d ",rem);
}

	

	
		
	
