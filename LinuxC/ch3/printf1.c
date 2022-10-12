#include <stdio.h>
int main(void)
{
    char ch = 65;
    float f = 123.456;
    printf("%d, %c\n", ch, ch);  // 65, A
    printf("f = %e\n", f);  // f = 1.234560e+02
    return 0;
}