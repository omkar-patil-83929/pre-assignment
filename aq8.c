#include <stdio.h>
int main() {
   
   // printf() displays the string inside quotation
   struct student
   {
    char nm[15],roll[15];
    int marks;
  }std;
  //struct student std;
   
   //struct student std
   printf(" enter student name\n");
  // scanf("%[^\n]s",&std.nm);
  gets(std.nm);
   printf("Enter alphanumeric roll");
  // scanf("%[^\n]s",&std.roll);
  gets(std.roll);
   printf("\n enteer marks obtained");
   scanf("%d",&std.marks);
   printf("\n your name is %s",std.nm);
   printf("\n your alphanumeric roll num is %s",std.roll);
   printf("\n marks obtained is %d",std.marks);
   
   return 0;
}