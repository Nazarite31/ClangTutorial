#include <stdio.h>


//自定义函数
int SumTwoNums(int v_num1, int v_num2)
{
    int res = v_num1 + v_num2;
    return res;
}


int main(int argc, char* argv[])
{
    int num1 = 10;
    int num2 = 20;

    printf("%d + %d = %d\n", num1, num2, 
        SumTwoNums(num1, num2));  // 库函数

    return 0;
}