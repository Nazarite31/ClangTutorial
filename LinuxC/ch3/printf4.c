#include <stdio.h>
int main(void)
{
    printf("[%s:%d] before while\n", __FUNCTION__, __LINE__);
    while (1);
    printf("[%s:%d] after while\n", __FUNCTION__, __LINE__);
    return 0;
}
/*
[nazarite@centos7 clang]$ ./a.out
[main:4] before while

^C
*/