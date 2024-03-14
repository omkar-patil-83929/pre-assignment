#include<stdio.h>
int main()
{
	int s_num,l_num,no,flag=0;
	printf("\n enter starting number");
	scanf("%d",&s_num);
	printf("\n enter last number");
	scanf("%d",&l_num);
	no=s_num;
	for(;no<=l_num;no++)
	{	flag=0;
		for(int i=2;i<=no/2;i++)
		{   
			if(no%i==0)
			{	flag++;
//				printf("\n %d",no);
		    	break;
			}
		}
		if(flag==0)
			printf("\t %d ",no);
	}


	return 0;
}
			
