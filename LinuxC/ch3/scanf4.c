#include <stdio.h>
int main(void)
{
    int i;
    char ch;
    scanf("%d", &i);
    scanf("%*c%c", &ch);
    printf("i = %d, ch = %d\n", i, ch);
    return 0;
}
/*
12
c
i = 12, ch = 99
请按任意键继续. . .
*/