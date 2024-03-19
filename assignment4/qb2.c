#include<stdio.h>
int power(int,int);
int main()
{
	int base,index,res;
	printf("\n enter base value");
	scanf("%d",&base);
	printf("\n enter index value");
	scanf("%d",&index);
	res=power(index,base);
	printf(" %d power of %d is %d",index,base,res);
	return 0;
}
int power(int ind,int base)
{
	int res=1;
	if(ind==1)
		return base;
	else
		res=res*base;
		ind--;
		return res*power(ind,base);
}
