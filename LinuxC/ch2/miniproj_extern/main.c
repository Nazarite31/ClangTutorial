#include <stdio.h>
#include "proj.h"

int i = 10;

int main(void)
{
    printf("[%s] i = %d\n", __FUNCTION__, i);  // [main] i = 10
    func();  // [func] i = 10
    return 0;
}