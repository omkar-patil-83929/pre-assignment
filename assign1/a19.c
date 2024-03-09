#include<stdio.h>
int main()
{
	int far,c;
	float cel,f;
	printf("\n enter how much faranheit");
	scanf("%d",&far);
	cel=(float)((5.0f/9)*(far-32));
	printf("cel is %f",cel);
	printf("enter celcius\n");
	scanf("%d",&c);
	f=((9.0f/5)*c)+32;
	printf("\nfara is %f",f);
	return 0;
}

	
