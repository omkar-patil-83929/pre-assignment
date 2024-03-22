#include<stdio.h>
int max(int *);
void print(int *);
int min(int *);
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
	printf("\n minimum of array element is %d",min(arr));
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
int min(int *ptr)
{	
  int min=ptr[0];
  for(int i=1;i<5;i++)
 {
 	if(ptr[i]<min)
	{
		min=ptr[i];
	}
 }
 return min;

}






