#include<stdio.h>
int main()
{ 
	int num;
	printf("\n enter the two number");
	scanf("%d",&num);
	printf("\n factors are 1");
	for(int i=2;i<num;i++)
	{	
		if(num%i==0)
		{
			printf("\t %d",i);
		}
	}
			
	
  return 0;
}
