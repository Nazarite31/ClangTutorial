#include <stdio.h>


int main(int argc, char* argv[])
{
	int a, b, sum;
	
	printf("please input two numbers:\n");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}