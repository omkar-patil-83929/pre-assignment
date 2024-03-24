#include<stdio.h>
#include<string.h>
char *u_strcat(char *,char *);
int main()
{
   char ch1[20];
   char ch2[20];
   printf("\n enter first string");
   scanf("%[^\n]s",ch1);
   getch();
   printf("enter second string");
  	gets(ch2);
  // scanf("%[^\n]s",ch2);
   u_strcat(ch2,ch1);
   printf("\n after concatenation ch2 is %s",ch2);
	return 0;
}
char *u_strcat(char *dest,char *src)
{
	int i=0;
	while(dest[i]!='\0')
  		i++;

	for(int j=0;src[j]!='\0';j++)
		dest[i++]=src[j];
	 
	 return dest;
}
