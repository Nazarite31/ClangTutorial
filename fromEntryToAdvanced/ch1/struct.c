#include <stdio.h>
#include <string.h>
/*
 * 对于复杂对象，使用结构体创建自定义的类型
 */

// 创建一个结构体类型
struct Book
{
    char name[20];
    short price;
};


int main(int argc, char *argv[])
{
    // 利用结构体类型创建一个该类型的结构体变量
    struct Book b1 = {"C语言程序设计", 55};

    printf("书名： 《%s》\n", b1.name);
    printf("价格： %d元\n", b1.price);

    b1.price = 15;
    printf("修改后的价格：%d元\n", b1.price);

    // b1.name = "C++程序设计";  // 数组名本质上是一个地址
    strcpy(b1.name, "C++程序设计");
    printf("修改后的书名：《%s》\n", b1.name);

    // 结构体指针
    struct Book *pb = &b1;
    printf("书名：《%s》，价格：%d元\n", (*pb).name, (*pb).price);
    printf("书名：《%s》，价格：%d元\n", pb->name, pb->price);

    // .操作符   结构体变量.成员
    // ->操作符  结构体指针->成员

    return 0;
}