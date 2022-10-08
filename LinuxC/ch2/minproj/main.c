#include <stdio.h>
#include "proj.h"

static int i = 10;  // static修饰全局变量

int main(void)
{
    printf("[%s] i = %d\n", __FUNCTION__, i);  // [main] i = 10
    // func();  // undefined reference to `func'
    call_func();  // [func] i = 20
    return 0;
}
