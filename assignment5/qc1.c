#include<stdio.h>
int main()
{
	int marks[5],sum=0;
	printf("\n enter marks");
	for(int i=0;i<5;i++)
	{
		printf("\n marks[%d]",i);
		scanf("%d",&marks[i]);
	}
	for(int i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	printf("\n sum is %d",sum);
	float avg=sum/5;
	printf("\n avg of 5 marks is %f",avg);
	return  0;
}
		
