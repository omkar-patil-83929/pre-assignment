#include<stdio.h>
int main()
{
	int row=4,col=4,ch=65;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<(col-i);j++)
		{
			printf(" %c ",ch);
			ch++;
		}
		printf("\n");
		ch=65+ ++i;
		i--;
	}
return 0;
}

