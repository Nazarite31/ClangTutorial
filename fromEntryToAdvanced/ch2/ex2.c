#include <stdio.h>


int main(int argc, char *argv[])
{
    int ch = 0;

    // Ctrl+z代表EOF
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }

    return 0;
}