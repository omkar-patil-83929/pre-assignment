#include<stdio.h>
int up,low,oth,no;
int main()
{
	int num;
	printf("Enter how much digit string you want");
	scanf("%d",&num);
	char str[num+1];
	// gets(str);
	scanf("%s",&str);
	for(int i=0;i<=num;i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			up++;
			printf(" \n upper character is %c",str[i]);
		}
		else if(str[i]>=97&&str[i]<=122)
		{
			low++;
			printf(" \nlower character is %c",str[i]);
			
		}
		else if(str[i]>=48&&str[i]<=57)
		{
			no++;
			printf(" \n character in digit %c",str[i]);
		}
		else
		{
			oth++;
			printf(" \nother character is %c",str[i]);
		}
	}
	printf("\n number of uppercase letter is %d"
			"\n number of lowercase letter is %d"
			"\n number of digit is %d"
			"\n number of other character is %d"
			"\n total string is %d",up,low,no,oth,up+low+no+oth);
	
	return 0;
	 
}