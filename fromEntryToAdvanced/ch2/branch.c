#include <stdio.h>

// 什么是语句？
// C语言中由一个分号;隔开的就是一条语句
;  // 空语句

// 分支语句（选择结构）


int main(int argc, char *argv[])
{
    int age;
    printf("input your age:\n");
    scanf("%d", &age);

    if (age < 18)
        printf("You are underage.\n");

    if (age < 18)
    {
        printf("You are underage.\n");
        printf("You can't fall in love.\n");
    }
    else if (age >= 18 && age < 28)
        printf("You are youth.\n");
    else if (age >= 28 && age < 50)
        printf("You are in your prime.\n");
    else if (age >= 50 && age < 70)
        printf("You are elderly.\n");
    else
        printf("You are old.\n");

    // 悬空else问题：else和离它最近的未匹配的if匹配，和缩进无关

    // 判断变量与常量是否相等时把常量放在左边 5 == num ，避免num = 5的bug产生

    return 0;
}