#include<stdio.h>
int main()
{
    int num;
   // printf("enter how much long string you want");
    //scanf("%d",&num);
    char str[]="omkar";
    //char str1[10];
   // gets(str);
  int i=0;
  while(str[i]!='\0')
  {
    i++;//can uuse strlen string function also
  }
  for(int j=i-1;j>=0;j--)
  {
    printf("%c",str[j]);
  }
    return 0;
}