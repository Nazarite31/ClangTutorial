#include <stdio.h>
#define STRSIZE 32
int main(void)
{
    int i;
    float f;
    char str[STRSIZE];
    printf("Please enter an integer and a floating-point numbers:\n");
    // scanf("%d,%f", &i, &f);   // 必须输入1,3.14这种格式才行
    scanf("%d%f", &i, &f);
    printf("Please enter string:\n");
    scanf("%s", str);        // 数组名本身就是地址常量，变量名前不需要取地址符&
    printf("i = %d, f = %f, str = %s\n", i, f, str);
    return 0;
}