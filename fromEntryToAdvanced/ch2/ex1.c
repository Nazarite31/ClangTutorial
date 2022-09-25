#include <stdio.h>

/* 判断一个数是否为奇数 */
int IsOdd(int n)
{
    if (0 != n % 2)
        return 1;
    else
        return 0;
}

/* 输出1-100之间的奇数 */
int main(int argc, char *argv[])
{
    int i;

    for (i=1; i<101; ++i)
    {
        if (IsOdd(i))
            printf("%d ", i);
    }
    printf("\n");
    

    return 0;
}