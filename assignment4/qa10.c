#include<stdio.h>
void leap(int );
int day(int);
int main()
{
	int year,mon,days;
	printf("\n enter number");
	scanf("%d",&year);
	printf("enter month");
	scanf("%d",&mon);
	leap(year);
	days=day(mon);
	printf("\n this month having %d days",days);
//	leap(year);
	return 0;
}
void leap(int year)
{
	if(year%4==0&&year%100!=0)
	{
		printf("\n  %d it is leap year",year);
//		return 29;
	}
	else if(year%400==0)
	{
		printf("\n %d is leap year",year);
//		return 29;
	}
	else
	{
		printf(" %d is not leap year",year);
//		return 28;
	}


}
int day(int mon)
{
	if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
	{
		int day=31;
		return day;
	}
	else if(mon==4||mon==6||mon==9||mon==11)
	{
		int day=30;
		return day;
	}
	else
	{
		int year;
		if((year%4==0&&year%100!=0)|| (year%400==0))
		{
			int day=29;
			return day;
		}
		else
		{
			int day=28;
			return day;
		}
	}
}
