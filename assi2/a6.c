#include<stdio.h>
int main()
{
	long int num;
	int quo,n,m,quo1,n1,m1;
	printf("\n enter 5 digit number");
	scanf("%ld",&num);
	quo=num/1000;
	n=quo/10;
	m=quo%10;
	quo1=num%100;
	n1=quo1/10;
	m1=quo1%10;
	printf ("value of n=%d m=%d n1=%d m1=%d",n,m,n1,m1);
	if((n==m1)&&(m==n1))
		printf("\n it is palindrome");
	else
		printf("\n it is not palindrome");
	return 0;
}
