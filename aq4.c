#include<stdio.h>
int main()
{
	int m[5],tot=0;
	for(int i=1;i<=5;i++)
	{
	printf("Enter a marks of  %d subject out of 20\n",i);
	scanf("%d",&m[i-1]);
	}
	for( int i=0;i<=4;i++)
	{
		tot=tot+m[i];
	}
	printf(" total marks are %d\n ",tot);
	if(tot>=90)
	{
		printf("\n you got Ex grade");
	}
	else if(tot>=80&&tot<90)
	{
		printf("\n you got A grade");
	}
	else if(tot>=70&&tot<80)
	{
		printf("\n you got B grade");
	}
	else if(tot>=60&&tot<70)
	{
		printf("\n you got C grade");
	}
	else
	{
		printf("\n you got F grade");
	}
	 return 0;
}