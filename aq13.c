#include<stdio.h>
#include<string.h>
int main()
{
    char *s="good morning";
    char *q="good night";
    char *r="hello world";
    char *x="good morning";
    if(strcmp(s,q)==0)
    {
        printf("match");
        printf("\n %s",q);
    }
     if(strcmp(s,r)==0)
    {
        
        printf("match");
        printf("\n %s",r);
    }
    if(strcmp(s,x)==0)
    {
        
        printf("match");
        printf("\n %s",x);
    }
    return 0;


}