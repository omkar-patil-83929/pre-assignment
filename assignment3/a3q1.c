#include<stdio.h>
int main()
{
	int num;
	char ch;
	printf("\n enter number and character");
	scanf("%d%*c%c",&num,&ch);
	printf("\nyou entered number is %d and character is %c",num,ch);
	for(int i=0;i<num;i++)
	{
		printf("%c",ch);
	}
	return 0;
}

