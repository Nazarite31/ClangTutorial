#include <stdio.h>
int main(void)
{
    int i;
    int ret;
    while (1)
    {
        ret = scanf("%d", &i);
        if (1 != ret)
        {
            printf("Enter error!\n");
            break;
        }
        printf("i = %d\n", i);
    }
    return 0;
}
