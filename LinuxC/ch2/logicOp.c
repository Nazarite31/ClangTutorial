#include <stdio.h>
int main(void)
{
    int a = 15, b = 20, c = 100, d = 200;
    int m = 1, n = 1;
    int j = 1, k = 1;
    (m = a > b) && (n = c > d);
    printf("m = %d, n = %d\n", m, n);  // m = 0, n = 1
    (j = a > b) || (k = c > d);
    printf("j = %d, k = %d\n", j, k);  // j = 0, k = 0
    return 0;
}