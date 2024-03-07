#include <stdio.h>
int main() {
   int num;
   // printf() displays the string inside quotation
   printf("Enter a number");
   scanf("%d",&num);
   for(int i=1;i<=10;i++)
   {
      int tab;
      tab=num*i;
      printf("\n %d",tab);
      //printf("\n %d",num*i);
   }
   
   return 0;
}