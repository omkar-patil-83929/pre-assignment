#include<stdio.h>
void reverse(int *);
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
	reverse(arr);
	return 0;
}
void print(int *arr)
{
	for(int i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
	}
}
void reverse(int *arr)
{
	int i=0,j=4;
	for(i=0,j=4;i<j;i++,j--)
	{
		int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
	}

	printf("-----------------after reverse_---------------");

	for(i=0;i<5;i++)
		printf(" %d ",arr[i]);

}

		

