#include<stdio.h>
#include<string.h>
int main()
{
    int l,cout=1;
    char str[10];
    printf("Enter a string");
    scanf("%s",&str);
    l=strlen(str);
    printf("string length is %d",l);
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(str[i]==str[j])
            {
                //printf("%c",str[i]);
                cout++;
            }

        }
        
        printf("character %c comes %d time",str[i],cout);
        cout=1;
    }
    return 0;
    // this code work half state only
}