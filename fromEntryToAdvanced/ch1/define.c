#include <stdio.h>

// #define定义标识符常量
#define N 100
// #define定义宏 - 带参数
#define MAX(X, Y) (X > Y ? X : Y)

int main(int argc, char *argv[])
{
    int a = N;
    printf("a = %d\n", a);

    printf("max = %d\n", MAX(10, 20));

    return 0;
}