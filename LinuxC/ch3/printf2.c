#include <stdio.h>
#define STRSIZE 32
#define SEC_YEAR (60LL*60LL*24LL*365LL)  // 使用LL防止整型溢出
int main(void)
{
    int i = 123, j = -10;
    float f = 123.456;
    char str[STRSIZE] = "helloworld";
    double d = 1.23456;
    long l = 123456L;
    /* 修饰符m */
    printf("i = %d\n", i);     // i = 123
    printf("i = %5d\n", i);    // i =   123
    printf("i = %1d\n", i);    // i = 123
    /* 修饰符.n */
    printf("f = %f\n", f);     // f = 123.456001
    printf("f = %8.1f\n", f);  // f =    123.5
    printf("str = %s\n", str);     // str = helloworld
    printf("str = %.5s\n", str);   // str = hello
    /* 修饰符- */
    printf("str = %10.5s[over]\n", str);   // str =      hello[over]
    printf("str = %-10.5s[over]\n", str);  // str = hello     [over]
    /* 修饰符+ */
    printf("i = %+d\n", i);  // i = +123
    printf("j = %+d\n", j);  // j = -10
    /* 修饰符0 */
    printf("i = %05d\n", i); // i = 00123
    /* 修饰符# */
    printf("%o, %#o\n", i, i);  // 173, 0173
    printf("%x, %#x\n", i, i);  // 7b, 0x7b
    /* 修饰符l */
    printf("l = %ld\n", l);  // l = 123456
    printf("d = %lf\n", d);  // d = 1.234560
    printf("SEC_YEAR = %llu\n", SEC_YEAR);  // SEC_YEAR = 31536000
    return 0;
}