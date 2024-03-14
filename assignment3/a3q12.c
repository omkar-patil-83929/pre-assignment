#include<stdio.h>
int main()
{
	int base,pow,flag=0,temp;
	printf("\n enter the base value");
	scanf("%d",&base);
	printf("\n enter the power value");
	scanf("%d",&pow);
	temp=1;
	while(pow!=0)
	{ 
		
		temp=temp*base;
		pow--;
	//	flag++;
	}
/*	if(flag==0)
	{
		printf("\n answer is %d",base);
	}
	else
	{
    	printf("\nanswer is %d",base);
	}*/
    	printf("\nanswer is %d",temp);
	return 0;
}

		

