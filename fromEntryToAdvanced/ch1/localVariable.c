#include <stdio.h>


/* 
 * 局部变量是指在花括号{}内的变量，不仅仅在函数内的变量才是局部变量
 * 局部变量的作用域是变量所在的局部范围
 * 局部变量的生命周期：进入作用域生命周期开始，出作用域生命周期结束
 */


void test_local_var1(void)
{
	int var1 = 11;

	{
		printf("var1=%d\n", var1);  //ok
	}

	printf("var1=%d\n", var1);  //ok
}


void test_local_var2(void)
{
	{
		int var2 = 12;
		printf("var2=%d\n", var2);  //ok
	}

	// printf("var2=%d\n", var2);  //error 'var2' undeclared (first use in this function)
}


int main(int argc, char* argv[])
{
	test_local_var1();
	test_local_var2();

	return 0;
}