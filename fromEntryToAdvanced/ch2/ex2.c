#include <stdio.h>


int main(int argc, char *argv[])
{
    int ch = 0;

    // 输入Ctrl+z代表EOF
    // EOF(end of file)，值是-1
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }

    return 0;
}