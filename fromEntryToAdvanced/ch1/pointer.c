#include <stdio.h>


int main(int argc, char *argv[])
{
    int a = 10;
    printf("%p\n", &a);

    // 指针变量：用来存放地址的变量
    int *p = &a;  
    printf("%p\n", p);  // p的类型是int*

    return 0;
}