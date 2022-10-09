#include <stdio.h>
int main(void)
{
    int a = 2;
    a -= a *= a += 3;  // 结合性从右向左运算
    printf("a = %d\n", a);  // a = 0
    return 0;
}