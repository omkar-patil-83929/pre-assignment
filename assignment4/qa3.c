#include<stdio.h>
int flag;
int cal(int,int,char);
int main()
{
	int n1,n2;
	char opr;
	printf("\n enter number1");
	scanf("%d",&n1);
	printf("\n enter second number");
	scanf("%d",&n2);
	printf("\n enter operand");
	scanf("%*c%c",&opr);
	int answer=cal(n1,n2,opr);
	printf("\n sum is %d \n:",answer);

	return 0;
}
int cal(int n1,int n2,char op)
{
	int ans;
	switch(op)
	{
		case '+':
			ans=n1+n2;
			return ans;
			break;
		case '-':
			ans=n1-n2;
			return ans;
			break;
		case '*':
			ans=n1 * n2;
			return ans;
			break;
		case '/':
			if(n2==0)
			{	printf("\n invalid n2");
				flag++;
		    	return -1;
			}
			else
			{
				ans=n1/n2;
				return ans;
			}
		default:
			printf("\n invalid operator");
			break;
	}
	if(flag!=0)
	{
		printf("\n num2 is invalid");
	}
}			
