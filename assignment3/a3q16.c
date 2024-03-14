#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
      int guess,num,count=0,cond=0;
	  srand(time(0));
	   guess=rand()%1000+1;
	   printf(" guess=%d",guess);

	do
	{
		printf("\n guess the number");
		scanf("%d",&num);
//		guess=rand()%1000+1;
//		printf("\n random num ber is %d",guess);
		if(num<guess)
		{
			printf("\n left");
			count++;
			cond=1;
		}
		else if(num>guess)
		{
			printf("\n Right");
			count++;
			cond=1;
		}
		else
		{
			printf("\n CONGRATS!!!!");
			printf("\n enetered number is %d and random number is %d",num,guess);
			return 0;

		}
	}while(cond!=1||count!=10);
	return 0;
}
