#include<stdio.h>
#include<float.h>
int main()
{
	printf("--------------------------------------------------------------\n");
	printf("Data Type\tFS\t\tSIZE\t\tdecimalor mantissa\n");
	printf("-------------------------------------------------------------\n");
	printf("float\t\t%%f\t\t%d\t\t%d\n",sizeof(float),FLT_DIG);

	printf("double\t\t%%lf\t\t%d\t\t%d\n",sizeof(double),FLT_DIG);

	printf("long double\t%%ld\t\t%d\t\t%d\n",sizeof(long double),FLT_DIG);
	float a=3.142;
	printf("float=%f\nfloat=%g\nfloat=%E\nfloat=%e",a,a,a,a);
	return 0;
}
