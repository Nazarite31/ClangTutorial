#include <stdio.h>
int main(void)
{
    int a = 16;   // B10000
    a = a | 1 << 2;  // 将第二位置为1，其他位不变
    printf("%d\n", a);  // 20  B10100
    a = a & ~(1 << 2);  // 将第二位置为0，其他位不变
    printf("%d\n", a);  // 16
    printf("%d, %d\n", a & 1 << 4, a & 1 << 3);  // 16, 0
    return 0;
}