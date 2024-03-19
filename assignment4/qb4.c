#include<stdio.h>
int fabonacci(int );
int fib(int n);

int main()
{
	int num,n;
	printf("\n enter how much term you want:");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
		printf( " %d ",fabonacci(i));
	printf("\n which index number you want");
	scanf("%d",&n);
	printf(" %d element of fabonacci number is %d",n,fib(n));
	return 0;
}
int fabonacci(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fabonacci(n-1)+fabonacci(n-2);
}
int fib(int n)
{
	if(n<=1)
		return n;
	return fib(n-1)+fib(n-2);
}
	
