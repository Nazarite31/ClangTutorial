#include <stdio.h>

/* 
 * 常量分类： 
 * （1）字面常量
 * （2）const修饰的常变量
 * （3）#define定义的标识符常量
 * （4）枚举常量
 */

#define MAX 10

enum Sex
{
	MALE,  //枚举常量
	FEMALE,  //枚举常量
	SECRET  //枚举常量
};

enum Color
{
	RED=5,
	GREEN,
	BLUE
};


int main(int argc, char* argv[])
{

	3;  //字面常量
	3.14;  //字面常量
	// 3 = 5;  //error, 字面常量本身不能被修改



	const int a = 10;  // const表示常属性，a为const修饰的常变量
	printf("a=%d\n", a);
	// a = 20;  //error: assignment of read-only variable 'a'   const修饰的常变量本身不能被修改
	// printf("a=%d\n", a);
	
	/* 证明const修饰的变量本质上还是变量，只是具备常属性，因此被称为常变量 */
	// int n = 10;  //error: variable-sized object may not be initialized
	// const int n = 10;  //error: variable-sized object may not be initialized
	// int arr[n] = {0};



	printf("MAX=%d\n", MAX);  //#define定义的标识符常量
	int arr[MAX] = {1, 2, 3};
	for (int i = 0; i < MAX; i++)
	{
		printf("%d ", arr[i]);
	}
	puts("\n");
	// MAX = 30;  //error，标识符常量本身不能被修改
	


	enum Sex jack_sex = MALE;
	printf("Jack sex is %d\n", jack_sex);  //默认MALE的值是0
	printf("Jane sex is %d\n", FEMALE);  //默认FEMALE的值是1
	printf("Mike sex is %d\n", SECRET);  //默认SECRET的值是2

	enum Color c1 = RED;	
	enum Color c2 = GREEN;	
	enum Color c3 = BLUE;	
	printf("RED   is %d\n", c1);
	printf("GREEN is %d\n", c2);
	printf("BLUE  is %d\n", c3);
	c1 = BLUE;  // 通过枚举类型创建的变量可以被修改
	// BLUE = 6;  //error，枚举常量本身不能被修改


	return 0;
}