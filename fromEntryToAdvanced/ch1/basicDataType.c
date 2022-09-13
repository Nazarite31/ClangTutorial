#include <stdio.h>


int main(int argc, char* argv[])
{
	printf("char       %llu bytes\n", sizeof(char));
	printf("short      %llu bytes\n", sizeof(short));
	printf("int        %llu bytes\n", sizeof(int));
	printf("long       %llu bytes\n", sizeof(long));
	printf("long long  %llu bytes\n", sizeof(long long));
	printf("float      %llu bytes\n", sizeof(float));
	printf("double     %llu bytes\n", sizeof(double));

	return 0;
}