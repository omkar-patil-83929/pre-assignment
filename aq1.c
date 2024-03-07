#include<stdio.h>
int main()
{
	int num;
	printf("how many number");
	scanf("%d",&num);
	int arr[num],i,max;
	for(i=0;i<num;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&arr[i]);
	}

    max=arr[0];	
	for(i=1;i<num;i++)
    {
    	if(max<arr[i])
    	{
    		max=arr[i];
            printf("maximum number is %d",max);
    		
    		
		}
		
	}
printf("maximum number is %d",max);
	return 0;
	
}