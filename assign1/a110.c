#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,peri,area;
	float s,sq;
	printf("\n enter three side of triangle");
	scanf("%d %d %d",&a,&b,&c);
	peri=a+b+(c*a)+b+c;
	s=(a+b+c)/3.0f;
	sq=s*(s-a)*(s-b)*(s-c);
	area= sqrt(sq);
	printf("\n peri is %d and area is %f",peri,area);
	return 0;
}
