#include <stdio.h>


/*
 * 局部变量：定义在代码块（{}）内部的变量，作用域是变量所在的局部范围
 * 全局变量：定义在代码块（{}）之外的变量，作用域是整个工程
 */

int global = 2019; //global


void test(void)
{
	// printf("test func: local=%d\n", local);  //error: 'local' undeclared (first use in this function)
	printf("test func: global=%d\n", global);
}


int main(int argc, char* argv[])
{
	int local = 2018; //local variable

	test();

	/* 局部变量和全局变量同名的时候，局部变量优先使用 */
	int global = 2020;  //local variable
	// global = 2022;  //global is changed
	printf("main func: local=%d\n", local);
	printf("main func: global=%d\n", global);

	test();

	return 0;
}