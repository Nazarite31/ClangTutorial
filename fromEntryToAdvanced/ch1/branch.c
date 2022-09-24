#include <stdio.h>


int main(int argc, char *argv[])
{
    int a = 10;
    printf("%p\n", &a);

    // 指针变量：用来存放地址的变量
    int *p = &a;  
    printf("&p: %p\n", p);  // p的类型是int*

    // * 解引用操作符/间接访问操作符
    printf("*p: %d\n", *p);  
    *p = 20;  // 修改p指向对象a的值
    printf("*p: %d\n", *p);  

    char c = 'w';
    char *pc = &c;
    *pc = 'h';
    printf("%c\n", c);

    // 指针大小在32位平台是4 Bytes，64位平台是8 Bytes
    printf("%llu bytes\n", sizeof(p));
    printf("%llu bytes\n", sizeof(pc));
    printf("%llu bytes\n", sizeof(char *));
    printf("%llu bytes\n", sizeof(short *));
    printf("%llu bytes\n", sizeof(int *));
    printf("%llu bytes\n", sizeof(long *));
    printf("%llu bytes\n", sizeof(long long *));
    printf("%llu bytes\n", sizeof(float *));
    printf("%llu bytes\n", sizeof(double *));

    return 0;
}