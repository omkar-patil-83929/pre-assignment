#include<stdio.h>
int main()
{
	int num,flag=0;
	printf("\n enter the number");
	scanf("%d",&num);
	int no=++num;
	int count=5;
	while(count!=0)
	{
		for(int i=2;i<no/2;i++)
		{
			if(no%i==0)
			{
				no++;
				i=1;
				flag++;
			}
			flag=0;
		}
		if(flag==0)
		{	printf("\t %d",no);
			count--;
			no++;
		}
	}
	return 0;
}


	




