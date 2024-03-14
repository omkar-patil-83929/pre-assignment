#include<stdio.h>
#include<math.h>
int main()
{
	int num,sum=0,rem,temp,choice,rev=0,count=1;
	char ch;
lable:	printf("\n enter a num");
	scanf("%d",&num);
	temp=num;
	printf("1.Sum of Digit of Integer"
			"\n2.reverse the number"
			"\n3.palindrome"
			"\n4.armstrong");
	printf("\n enter a choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
    	while(num!=0)
     	{
	    	rem=num%10;
	      	sum=sum+rem;
	      	num=num/10;
        }
       	printf("\n sum of digit is %d",sum);
		break;
	case 2:
		while(num!=0)
		{ 
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		printf("rev=%d",rev);
		break;
	case 3:
		while(num!=0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
			count++;
		}
		printf("rev=%d",rev);
		if(temp==rev)
		{
			printf("\n given number is palindrome");
		}
		else
		{
			printf("\n it is not palindrome");
		}
		break;
	case 4:
		while(num!=0)
		{
			rem=num%10;
			sum=sum+rem *rem*rem;
			num=num/10;
		}
		if(sum==temp)
		{
			printf("\n it is armstrong");
		}
		else
		{
			printf("\n it is not armstrong");
		}
		break;	
	default:
		printf("\n invalid choice");
		break;
	}
	printf("\n Do you want to continue?(y/n)");
	getchar();
	ch=getchar();
	if(ch=='y')
		goto lable;
	else
		return 0;


	return 0;
}

