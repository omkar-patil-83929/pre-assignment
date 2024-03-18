#include<stdio.h>
void leap(int );
int main()
{
	int year;
	printf("\n enter number");
	scanf("%d",&year);
	leap(year);
	return 0;
}
void leap(int year)
{
	if(year%4==0&&year%100!=0)
	{
		printf("\n  %d it is leap year",year);
	}
	else if(year%400==0)
	{
		printf("\n %d is leap year",year);
	}
	else
	{
		printf(" %d is not leap year",year);
	}
}

