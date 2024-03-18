#include<stdio.h>
void print_pattern(int,char);
int main()
{
	int num;
	char ch;
	printf("\n enter how much time you want to print");
	scanf("%d",&num);
	printf("\n enter character");
	scanf("%*c%c",&ch);
	print_pattern(num,ch);
	return 0;
}
void print_pattern(int no,char c)
{
	for(int i=1;i<=no;i++)
	{
		printf(" %c ",c);
	}
}
		
