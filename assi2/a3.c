#include<stdio.h>
int main()
{	 int num;
	 printf("\n enter number");
	 scanf("%d",&num);
	 if(num>0)
	 	printf("\n it is positive number");
	else if(num<0)
		printf("\n it is negative number");
	else
		printf("\n it is zero");
	return 0;
}
