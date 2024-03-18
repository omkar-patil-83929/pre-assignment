#include<stdio.h>
int fab();
int main()
{	int n,res;
	printf("\n enter how much digityou want");
	scanf("%d",&n);
	printf(" %d %d ",0,1);
	while(n!=2)
	{
		res=fab(n);
		printf(" %d ",res);
		n--;
	}
	return 0;
}
int fab()
{
	static	int num1=0,num2=1,num3;
/*	if(n==1)
	{
//		printf(" %d ",num1);
		return num1 ;
	}
	else if(n==2)
	{
	///	printf(" %d ",num2);
		return num2;
	}
	else
	{
		
	//		printf(" %d %d",num1,num2);
	*/
		
		//	printf(" %d %d",num1,num2);
			num3=num1+num2;
			num1=num2;
			num2=num3;
		//	printf(" %d ",num3);
			return num3;

		
	//	return -1;
	

}	
