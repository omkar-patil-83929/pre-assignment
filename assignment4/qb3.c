/*9. Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3*/
#include<stdio.h>
int gcd(int,int);
int main()
{
	int num1,num2,res;
	printf("\n enter two number");
	scanf("%d%d",&num1,&num2);
	res=gcd(num1,num2);
	printf("GCD of %d and %d is %d",num1,num2,res);
	return 0;
}

int gcd(int no1,int no2)
{
	int rem;
	if(no1%no2==0)
		return no2;
	else
	rem=no1/no2;
	no1=no2;
	no2=rem;
//	printf("   %-2d",no2);
    gcd(no1,no2);
}
