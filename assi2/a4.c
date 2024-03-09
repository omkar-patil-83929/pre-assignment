#include<stdio.h>
int main()
{
	int n1,n2,max;
	printf("\n Enter two number");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
		printf("\n %d is greater than %d",n1,n2);
	else
		printf("\n %d is greater than %d",n2,n1);
	
    max=(n1>n2)?printf("\n %d is greater than %d",n1,n2):printf("\n %d is greater than %d",n2,n1);
//	printf("\nmax=%d",max);
	return 0;
}
