#include<stdio.h>
//void showbits(int);
void main()
{
    int num,i=0,oct;
    int bin[16];
   printf("\n Enter a number");
    scanf("%d",&num);
   /* printf("\n bitwise number is");
    showbits(num);*/
    while(num>0)
    {
    	
    	bin[i]=num%2;
    	num=num/2;
    	i++;
	}
	printf("bitwise number is");
	for(int j=i-1;j>=0;j--)
	{
		printf(" %d",bin[j]);
	}
	i=0;
	num=oct;
	 while(num!=0)
    {
    	
    	bin[i]=num%8;
    	num=num/8;
    	i++;
		//printf("%d",bin[i]);
	}
   printf("0ctal number is");
	for(int j=i-1;j>=0;j--)
	{
		printf(" %d",bin[j]);

	}
	i=0;
	num=oct;
	 while(num!=0)
    {
    	
    	bin[i]=num%16;
    	num=num/16;
    	i++;
		//printf("%d",bin[i]);
	}
   printf("hexadecimal number is");
	for(int j=i-1;j>=0;j--)
	{
		printf(" %d",bin[j]);
	}	
    
	
}
