#include<stdio.h>
void print(int *);
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		printf("\n  arr[%d] ",i);
		scanf("%d",&arr[i]);
	}
	print(arr);
	return 0;
}
void print(int *arr)
{
	for(int i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
	}
}
