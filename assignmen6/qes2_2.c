#include<stdio.h>
#include<string.h>
char * u_strcpy(char *,const char *);
int main()
{   
	char src[20];
	char dest[20];
	printf("\n enter the string\n");
	scanf("%[^\n]s",src);
	u_strcpy(dest,src);
	printf("\n destination string is %s",dest);
    return 0;
}
char * u_strcpy(char * dest,const char *src)
{
	for(int i=0;src[i]!='\0';i++)
	{
		dest[i]=src[i];

	}
	return dest;
}
