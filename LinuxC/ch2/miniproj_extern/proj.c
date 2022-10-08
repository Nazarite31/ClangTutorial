#include <stdio.h>
#include "proj.h"

// extern int i = 100;  // warning: 'i' initialized and declared 'extern'
extern int i;
// extern float i;  // 随机值

void func(void)
{
    printf("[%s] i = %d\n", __FUNCTION__, i);
}