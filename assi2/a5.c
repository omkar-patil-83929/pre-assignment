#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("\n enter three number");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("\n maximum is %d",n1);
		}
		else
		{
			printf("\n maximum is %d",n3);
		}
	}
	else
	{
		if(n2>n3)
			{
				printf("\n max=%d",n2);
			}
		else
			{
				printf("\n max=%d",n3);
			}
	}
		(n1>n2)?(n1>n3)?printf("\n max is %d",n1):printf("\n max is %d",n3):(n2>n3)?printf("\n max is %d",n2):printf("\n max is %d",n3);	
		return 0;
}
