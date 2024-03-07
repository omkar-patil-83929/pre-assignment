#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    char str1[10];
    printf("enter string");
    scanf("%s",&str);
    strcpy(str1,str);
    strrev(str);
    if(strcmp(str,str1)==0)
    {
        printf("\n string is palindrome");
    }
    else{
        printf("\n string is not palindrome");
    }
    return 0;

}