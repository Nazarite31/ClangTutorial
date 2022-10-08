#include <stdio.h>

#define PI    3.14
#define ADD   (2+3)
#define MAX(a,b)    ((a)>(b)?(a):(b))
#define MAX_P(a,b)  ({typeof(a) x=(a),y=(b); (x)>(y)?(x):(y);})

int max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int r = 1, a = 5, b = 3;
    printf("area = %.2lf\n", PI * r * r);  // area = 3.14
    printf("%d\n", ADD * ADD);             // 25
    printf("MAX = %d\n", MAX(a, b));       // MAX = 5

    /* 使用宏出现异常的情况 */
    printf("a = %d, b = %d\n", a, b);      // a = 5, b = 3
    // printf("%d\n", ((a++)>(b++)?(a++):(b++)));
    printf("%d\n", MAX(a++, b++));         // 6
    printf("a = %d, b = %d\n", a, b);      // a = 7, b = 4
    /* 使用函数解决 */
    printf("a = %d, b = %d\n", a, b);      // a = 7, b = 4
    printf("%d\n", max(a++, b++));         // 7
    printf("a = %d, b = %d\n", a, b);      // a = 8, b = 5
    /* 使用宏解决 */
    printf("a = %d, b = %d\n", a, b);      // a = 8, b = 5
    // printf("%d\n", ({typeof(a++) x=(a++),y=(b++); (x)>(y)?(x):(y);}));
    printf("%d\n", MAX_P(a++, b++));       // 8
    printf("a = %d, b = %d\n", a, b);      // a = 9, b = 6
    return 0;
}