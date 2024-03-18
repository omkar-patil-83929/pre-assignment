#include<stdio.h>
int power(int ,int);
int main()
{
	int base,index;
	printf("\n enter base number");
	scanf("%d",&base);
	printf("\n enter a index");
	scanf("%d",&index);
	int ans=power(base,index);
	printf(" %d power of %d is %d",index,base,ans);
	return 0;
}
int power(int base,int index)
{
	int temp=1;
	while(index!=0)
	{
		temp=temp*base;
		index--;
	}
	return temp;
}
