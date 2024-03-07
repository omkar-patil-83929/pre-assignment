#include<stdio.h>
int main()
{
	int num;
	printf("how much digit in fabonacci series you want");
	scanf("%d",&num);
	int arr[num],i;
	arr[1]=0;
	arr[2]=1;
	if(num>=3)
	{
		for( i=3;i<=num;i++)
		{
			arr[i]=arr[i-1]+arr[i-2];
		//	printf("%2d",arr[i]);
			//printf("%2d",arr[i-1]+arr[i-2]);
		}
		for(i=1;i<=num;i++)
		{
			printf("\t%d",arr[i]);
		}
	}
	else
	{
		if(num==1)
		{
			printf("%d\n",arr[1]);
		}
		else
		{
			printf("%d\n",arr[2]);
		}
	}
	return 0;
}