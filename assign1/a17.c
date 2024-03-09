#include<stdio.h>
int main()
{
	int num;
	printf("\n enter number");
	scanf("%d",&num);
	int a=num/1000;
	int num1=num%1000;
	printf("face value is %d \n and its place value is %d",a,a*1000);
	int b=num1/100;
	int num2=num1%100;

	printf("\nface value is %d \n and its place value is %d",b,b*100);
	int c=num2/10;
	int num3=num2%10;

	printf("\nface value is %d \n and its place value is %d",c,c*10);

	printf("\nface value is %d \n and its place value is %d",num3,num3*1);
	printf("%d%d%d%d",num3,c,b,a);
	return 0;
}





