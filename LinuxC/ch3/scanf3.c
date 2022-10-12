#include <stdio.h>
int main(void)
{
    int a, b, ret;
    do
    {
        ret = scanf("%d%d", &a, &b);
        if (! ret)
        {
            printf("Enter wrong!\n");
            break;
        }
        printf("a = %d, b = %d, ret = %d\n", a, b, ret);
    }
    while (~ ret);
    /*
    关于~的作用：
      在Windows下，用户按下Ctrl+Z（会看到一个^Z字符），会停止输入流，scanf会返回-1。
      -1的补码为11111111 11111111 11111111 11111111 一共4个字节。~是C语言中的按位取反，
      ~（-1）结果为00000000 00000000 00000000 00000000刚好为整数0的补码。
      因此当输入Ctrl+Z时，scanf会返回-1，while(~-1)==while(0)，0为假，退出while循环。
    */
    return 0;
}
/*
12 13
a = 12, b = 13, ret = 2
12 13 14 15
a = 12, b = 13, ret = 2
a = 14, b = 15, ret = 2
12 13 14
a = 12, b = 13, ret = 2
15
a = 14, b = 15, ret = 2
13 a
a = 13, b = 15, ret = 1
Enter wrong!
*/