#include<stdio.h>
int main()
{
	int a,b,sum,mul,dif;
//	unsigned char c='a';
	printf("\n Enter two number");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("\n sum of two number is %d",sum);
	mul=a*b;
	printf("\n multiplication of two number is %d",mul);
	dif=a-b;
	printf("\n substraction  is %d",a-b);
	short int sum1=sum;
	printf("\nshort  addition is %hd",sum1);
	long int  mul1=mul;
	printf("\n long multiplication is %ld",mul1);
	unsigned char c='a';
	printf("\n unsigned char is %u\n",c);
	return 0;
	
}

