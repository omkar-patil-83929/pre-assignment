#include<stdio.h>
int main()
{
	int n1,n2,rem=1,flag=0;
	printf("\n enter two  the number");
	scanf("%d %d",&n1,&n2);

	while(rem!=0)
	{
		if(n1>n2)
	   {rem=n1%n2;
		n1=n2;
		n2=rem;
		flag++;
		}
		else
		{
			rem=n2%n1;
			n2=n1;
			n1=rem;
		}

	} 
	if(flag==1)
    	printf("\n GCD is %d ",n2);
	else
		printf("\n GCD is %d",n1);
	return 0;
}
	
