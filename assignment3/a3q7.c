#include<stdio.h>
int main()
{
	int num,div,i=1,temp;
	printf("\n enter the number");
	scanf("%d",&num);
	div=num;
	while(i<num/2)
	{
/*		if(i>div)
		{
			return 0;
		}*/
		if(num%i==0)
		{
			div=num/i;
			printf("%d *  %d = %d \n",i,div,num);
			
		}
		i++;
	/*	if(div>i)
		{
			return 0;
		}*/
		if(i>=div)
		{
			return 0;
		}
		
	}
	return 0;
}
