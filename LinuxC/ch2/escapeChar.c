#include <stdio.h>

int main(void)
{
    char arr[] = "abc\n\021\018";
    printf("%llu\n", sizeof(arr));  // 8
    return 0;
}