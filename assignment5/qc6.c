#include<stdio.h>
void duplicate(int *,int *);
void print(int *,int *);
void dprint(int *,int *);
int main()
{	int num;
	printf("\n enter how much element you want to enter");
	scanf("%d",&num);
	int arr[num];
	for(int i=0;i<num;i++)
	{
		printf("\n  arr[%d] ",i);
		scanf("%d",&arr[i]);
	}
	printf("hello");
	print(arr,&num);
	duplicate(arr,&num);
	dprint(arr,&num);
	return 0;
}
void print(int *arr,int *no)
{   printf("\n you entered array element is ");
	for(int i=0;i<(*no);i++)
	{
		printf(" %d ",arr[i]);
	}
}
void duplicate(int * arr,int *no)
{
	int flag=0;
	for(int i=0;i<(*no);i++)
	{   flag=0;
//     	printf("%d",arr[i]);
		for(int j=i+1;j<(*no);j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j]=0;
			}
		}

	}
}
void dprint(int *arr,int *no)
{ printf("\n by removing duplicate arrayh element array is :");
		int count=0;
		for(int i=0;i<(*no);i++)
		{

			if(arr[i]==0)
			{   
				arr[i]=arr[i+1];
				count++;
				continue;
		    }
			else
			{
				printf(" \n %d",arr[i]);
			}
			
       }
printf("\n in your array totally %d duplicate element",count);
}
