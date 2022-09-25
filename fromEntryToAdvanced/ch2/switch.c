#include <stdio.h>


int main(int argc, char *argv[])
{
    int day;

    printf("input a number(1-7): ");
    scanf("%d", &day);

    switch (day)  // switch后必须是整型表达式！
    {
        case 1:  // case后必须是整型常量表达式！
            printf("Monday\n");
            break;  // 搭配break语句实现分支
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:   // default不一定要写在最后
            printf("%d is illegal number\n", day);
            break;
    }

    switch (day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("working day\n");
            break;
        case 6:
        case 7:
            printf("rest day\n");
            break;
        default:
            printf("%d is illegal number\n", day);
            break;
    }

    return 0;
}