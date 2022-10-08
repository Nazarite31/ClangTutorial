#include <stdio.h>
#include "proj.h"

static int i = 20;

static void func(void)
{
    printf("[%s] i = %d\n", __FUNCTION__, i);
}

void call_func(void)
{
    func();
}