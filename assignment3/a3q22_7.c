#include<stdio.h>
int main()
{
	int i,j,no=71,no1=71;
	for(int i=0;i<4;i++)
	{
		for(int j=65;j<78;j++)
		{
			no=no+i*2;
			
			if(j>=no1&&j<=no)
			{
				printf(" %c ",
