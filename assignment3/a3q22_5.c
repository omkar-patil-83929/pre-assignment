#include<stdio.h>
int main()
{
	int row=4,col=4,ch=65;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf(" %c ",ch);
			ch++;
		}
		printf("\n");
	//	ch=65;
	}
			
	return 0;
}
