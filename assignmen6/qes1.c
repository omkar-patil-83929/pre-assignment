#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50];
	char ch1[50];
	char str[50];
	char c;
	printf("\n enter string ");
	scanf("%s",ch);
//	printf("\nyour string length is %d",strlen(ch));
	strcpy(ch1,ch);
	printf("\n string ch1 is %s",ch1);
	strcat(ch,ch1);
	printf("\n concatenating string is %s",ch);
	printf("\n after comparing two string result is %d",strcmp(ch,ch1));
//	printf("\n after comparing  ignoring casesensitivity result is %d",stricmp(ch,ch1));
//	printf("\n after reversing ch1 is %s",strrev(ch1));
	printf("\n enter character ");
	scanf("%c",&c);
	char *ptr = strchr(ch1,'c');
	printf("\n string is %s",ptr);
	ptr= strstr(ch1,"ar");
	printf("\n string is %s",ch1);
	strncpy(str,ch1,5);
	printf("\n string by strncpy is %s",str);
	ptr = strtok(ch1,"a");
	printf("\n after strtok is %s",ptr);
	strncat(str,ch1,6);
	printf("\n strncat is %s",str);
	int ret;
	ret=strncmp(ch1,str,6);
	printf("\n after strncmp string is %d",ret);
	return 0;
}
