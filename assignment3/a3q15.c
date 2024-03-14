#include<stdio.h>
int main()
{
	int n1,n2,ch,n=0;
	char c;
   do{
	printf("\n enter first number");
	scanf("%d",&n1);
	printf("\n enter second number");
	scanf("%d",&n2);
	
	printf("\n 1.Addition\n2.Substraction\n3.mul\n4.division\n5.Exit");
	printf("\n give choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			int sum;
			sum=n1+n2;
			printf("\n addition of two number %d",sum);
			break;
		case 2:
			int diff;
			diff=n1-n2;
			printf("\n difference of two no. is %d",diff);
			break;
		case  3:
			int mul;
			mul=n1*n2;
			printf("\n mul is %d",mul);
			break;
		case 4:
			int div;
			if(n2!=0)
			{
				div=n1/n2;
				printf("\n division is %d",div);
			}
			else
			{
				printf("\n number is divided by zero");
			}
			break;
		case 5:
			{
				printf("\n you choose exit");
				n=1;
			}
			break;
		default:
			printf("\n Invalid choice");
			break;
	}
	printf("\n do you want to continue(Y/N)");
	scanf("%*c%c",&ch);
	if(ch=='Y')
	{
		n=0;
	}
	else
	{
		n=1;
	}



	}while(n!=1);
	
	return 0;
}
