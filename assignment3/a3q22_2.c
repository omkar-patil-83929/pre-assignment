#include<stdio.h>
int main()
{
	int row=5,col=5;
	for(int i=0;i<row;i++)
	{
		for(int j=i;j<col;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
