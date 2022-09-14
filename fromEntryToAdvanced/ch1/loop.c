#include <stdio.h>


/* Ten thousand hours theory */
int main(int argc, char* argv[])
{
    int hours = 0;

    printf("Start learning a new skill...");
    while (hours < 10000)
    {
        if (hours % 100 == 0)
        {
            printf("study time is %dh, not enough!\n", hours);
        }

        hours++;
    }

    printf("Success as a master!");

    return 0;
}