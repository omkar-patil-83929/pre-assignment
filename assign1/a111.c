
#include<stdio.h>
#include<limits.h>
int main()
{	
	printf("---------------------------------------------------------\n");
	printf("DATA_TYPE\t\tSIZE\t\tFS\tRange\n");
	printf("-----------------------------------------------------------\n");
	printf("char\t\t\t %d\t\t%%c\t%dto%d\n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("unsigned char\t\t %d\t\t%%c\t%dto%d\n",sizeof(unsigned char),0,UCHAR_MAX);
	printf("short int \t\t%d\t\t%%hd\t%dto%d\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("unsigned short int\t %d\t\t%%hu\t%huto%hu\n",sizeof(unsigned short int),0,USHRT_MAX);
	printf("int\t\t\t%d\t\t%%d\t\%dto%d\n",sizeof(int),INT_MIN,INT_MAX);
	printf("unsigned int\t\t%d\t\t%%u\t%uto %u\n",sizeof(unsigned int),0,UINT_MAX);
	printf("long int \t\t%d\t\t%%ld\t%ldto%ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
	printf("Unsigned long int\t%d\t\t%%lu\t%luto%lu\n",sizeof(unsigned long int),0,ULONG_MAX);



	
	return 0;
}

