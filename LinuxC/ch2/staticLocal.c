#include <stdio.h>

void func(void)
{
    int x = 0;
    static int y;
    x++;
    y++;
    printf("x = %d, &x = %p, y = %d, &y = %p\n", x, &x, y, &y);
}

int main(void)
{
    auto int i;
    int j;
    static int s;
    printf("i = %d\n", i);   // i = 随机值
    printf("j = %d\n", j);   // j = 随机值
    printf("s = %d\n", s);   // s = 0
    func();    // x = 1, &x = 随机值, y = 1, &y = 随机值
    func();    // x = 1, &x = 不同的随机值, y = 2, &y = 相同的随机值
    func();    // x = 1, &x = 不同的随机值, y = 3, &y = 相同的随机值
    return 0;
}