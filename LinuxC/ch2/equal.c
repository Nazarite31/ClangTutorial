#include <stdio.h>
#include <math.h>

int IsPositive(float f)
{
    if (f > 0)
        return 1;
    // else if (f == 0)
    else if (fabs(f - 0) < 1e-6)
        return 0;
    else
        return -1;
}

int main(void)
{
    printf("%d, %d, %d\n", IsPositive(-3.14), IsPositive(0), IsPositive(100));
    return 0;
}