#include <stdio.h>


int main(int argc, char* argv[])
{
    int isStudyHard = 0;
    printf("Go to school\n");
    printf("Do you study hard?(0|1) >");
    scanf("%d", &isStudyHard);

    if (isStudyHard == 1)
    {
        printf("You have good grades.\n");
    } else {
        printf("You have bad grades.\n");
    }

    return 0;
}