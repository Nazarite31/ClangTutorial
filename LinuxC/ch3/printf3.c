#include <stdio.h>
int main(void)
{
    printf("[%s:%d] before while", __FUNCTION__, __LINE__);
    while (1);
    printf("[%s:%d] after while", __FUNCTION__, __LINE__);
    return 0;
}
/*
[nazarite@centos7 clang]$ ./a.out
^C
*/