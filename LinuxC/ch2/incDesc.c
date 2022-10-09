#include <stdio.h>
int main(void)
{
    int i = 1, j = 10, v;
    v = i++ + ++j;
    printf("i = %d\n", i);  // i = 2
    printf("j = %d\n", j);  // j = 11
    printf("v = %d\n", v);  // v = 12
    v = --i + j++;
    printf("i = %d\n", i);  // i = 1
    printf("j = %d\n", j);  // j = 12
    printf("v = %d\n", v);  // v = 12    
    return 0;
}