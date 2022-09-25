#include <stdio.h>


int main(int argc, char *argv[])
{
    int i = 1;

    while (i < 11)
    {
        printf("%d ", i);
        ++i;
    }
    printf("\n");

    return 0;
}