#include <stdio.h>

/*
 * 算术运算符  +  -  *  /  %
 * 移位操作符  >>  <<
 * 位操作符    &  |  ^
 * 赋值操作符  =  +=  -=  *=  /=  &=  ^=  |=  >>=  <<=
 * 单目操作符  !  -  +  &  sizeof  ~  --  ++  *  (type) 
 * 关系操作符
 */


int main(int argc, char* argv[])
{
    int a = 11;  // 1011
    int b = 5;   // 0101

    int div = a / b;  // 求商
    int mod = a % b;  // 取模
    printf("div=%d, mod=%d\n", div, mod);

    int shiftLeftOneBit = a << 1;  // 将a转化为2进制后，向左移动1位，去除左侧超出int的1位，右侧补1位0
    int shiftLeftTwoBit = a << 2;
    int shiftRightOneBit = a >> 1;
    int shiftRightTwoBit = a >> 2;
    printf("shift left one bit result is %d\n", shiftLeftOneBit);
    printf("shift left two bit result is %d\n", shiftLeftTwoBit);
    printf("shift Right one bit result is %d\n", shiftRightOneBit);
    printf("shift Right two bit result is %d\n", shiftRightTwoBit);

    printf("%d bit and %d result is %d\n", a, b, a & b);  // 0001
    printf("%d bit  or %d result is %d\n", a, b, a | b);  // 1111
    printf("%d bit xor %d result is %d\n", a, b, a ^ b);  // 1110，注：^不代表次方，是异或

    a += 10;  // 等价于a = a + 10;

    printf("!a=%d\n", !a);  // 单目操作符!表示逻辑反操作
    int c = -a;             // 单目操作符-表示负值
    c = +a;                 // 单目运算符+表示正值，通常省略
    printf("%p\n", &c);     // 单目运算符&表示取地址
    printf("%d\n", ~b);     // 单目运算符~表示对一个数的二进制位取反
    // 单目运算符*表示间接访问操作符（解引用操作符）

    // sizeof计算变量或类型所占的空间大小（以字节为单位）
    printf("%llu %llu\n", sizeof(c), sizeof(int));
    printf("%llu\n", sizeof a);       // 对于变量，括号可以省略
    // printf("%llu\n", sizeof int);  // 对于类型，括号是不可省略
    int arr[] = {1, 2, 3};
    printf("%llu\n", sizeof(arr) / sizeof(arr[0]));  // 也可以用于计算数组元素个数

    // (类型)变量 表示强制类型转换

    return 0;
}