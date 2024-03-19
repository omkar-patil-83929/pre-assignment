#include<stdio.h>
int fact(int);
int main()
{
	int num,res;
	printf("\n enter number to which you want to find factorial");
	scanf("%d",&num);
	res=fact(num);
	printf("factorial of %d is %d",num,res);
	return 0;
}
int fact(int no)
{
	if(no==0||no==1)
		return 1;
	else
  		return no * fact(no-1);
}
