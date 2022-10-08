#include <stdio.h>

int i = 100;  // 全局变量

void func(int i)  // 调用函数时分配的形参i是值传递
{
    printf("i = %d, &i = %p\n", i, &i);
}

int main(void)
{
    int i = 5;  // 局部变量
    {
        int i = 2;  // 局部变量
        printf("i = %d, &i = %p\n", i, &i);  // i = 2, &i = 000000000061FE18
        func(i);  // i = 2, &i = 000000000061FDF0
    }
    func(i);  // i = 5, &i = 000000000061FDF0
    return 0;
}