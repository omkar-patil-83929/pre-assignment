#include<stdio.h>
int max(int *);
void print(int *);
int main()
{
	int arr[5];
	printf("\n enter array element");
	for(int i=0;i<5;i++)
	{
		printf("\n  arr[%d] ",i);
		scanf("%d",&arr[i]);
	}
	print(arr);
    printf("\n maximum number from array is %d",max(arr));
	return 0;
}
void print(int *arr)
{
	for(int i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
	}
}
int max(int *ptr)
{
	int max=ptr[0];
	for(int i=1;i<5;i++)
	{
		if(max<ptr[i])
			max=ptr[i];
	}
	return max;
}





