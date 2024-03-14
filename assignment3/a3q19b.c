#include<stdio.h>
int main()
{
	int num,no,rem,count=0,ccount,temp=1,sum=0,s_num,l_num;
/*	printf("\n enter the starting  number");
	scanf("%d",&s_num);
	printf("\n enter last number");
	scanf("%d",&l_num);*/
	printf("\n enter number");
	scanf("%d",&num);
	no=num;
		while(num!=0)
		{	
			num=num/10;
			count++;
		}
		printf("\n number haaving %d digit",count);
		ccount=count;
		num=no;
		//	printf("check armstrong---------------");
		while(no!=0)
		{
			rem=no%10;
			while(count!=0)
			{
				temp=temp*rem;
				//printf("%d remeber ",rem);
				count--;
			//	printf("%d count",count);
			}
			printf("\n %d is remember",temp);
			count=ccount;
			sum+=temp;
			no=no/10;
			temp=1;
			
		}
		if(sum==num)
			printf("%d is armstrong",sum);
		else
			printf("\n no armstrong");

	
	return 0;
}


