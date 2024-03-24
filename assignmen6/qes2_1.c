#include<stdio.h>
#include<string.h>
int u_strlen(const char *);
int main()
{
	char str[50];
	int len;
	printf("\n enter string");
	scanf("%[^\n]s",str);
	len=u_strlen(str);
	printf("\n string length is %d",len);
	return 0;
}
int u_strlen(const char *p)
{
	int count=0;
	for(int i=0;p[i]!='\0';i++)
			count++;
	
	return count;


}
