#include <stdio.h>

/*
 * 算术运算符  +  -  *  /  %
 * 移位操作符  >>  <<
 * 位操作符    &  |  ^
 * 赋值操作符  =  +=  -=  *=  /=  &=  ^=  |=  >>=  <<=
 * 单目操作符  !  -  +  &  sizeof  ~  --  ++  *  (type) 
 * 关系操作符  >  >=  <  <=  !=  ==
 * 逻辑操作符  &&  ||
 * 条件操作符  exp1 ? exp2 : exp3;
 * 逗号表达式  exp1, exp2, exp3, ...expN
 * 下标引用操作符  []
 * 函数调用操作符  ()
 * 结构成员操作符  .  ->
 */


int main(int argc, char* argv[])
{
    int a = 11;  // 1011
    int b = 5;   // 0101

    // -----------------算术操作符----------------
    int div = a / b;  // 求商
    int mod = a % b;  // 取模
    printf("div=%d, mod=%d\n", div, mod);

    // -----------------移位操作符----------------
    int shiftLeftOneBit = a << 1;  // 将a转化为2进制后，向左移动1位，去除左侧超出int的1位，右侧补1位0
    int shiftLeftTwoBit = a << 2;
    int shiftRightOneBit = a >> 1;
    int shiftRightTwoBit = a >> 2;
    printf("shift left one bit result is %d\n", shiftLeftOneBit);
    printf("shift left two bit result is %d\n", shiftLeftTwoBit);
    printf("shift Right one bit result is %d\n", shiftRightOneBit);
    printf("shift Right two bit result is %d\n", shiftRightTwoBit);

    // -----------------位操作符----------------
    printf("%d bit and %d result is %d\n", a, b, a & b);  // 0001
    printf("%d bit  or %d result is %d\n", a, b, a | b);  // 1111
    printf("%d bit xor %d result is %d\n", a, b, a ^ b);  // 1110，注：^不代表次方，是异或

    // -----------------赋值操作符----------------
    a += 10;  // 等价于a = a + 10;

    // -----------------单目操作符----------------
    printf("!a=%d\n", !a);  // 单目操作符!表示逻辑反操作
    int c = -a;             // 单目操作符-表示负值
    c = +a;                 // 单目运算符+表示正值，通常省略
    printf("%p\n", &c);     // 单目运算符&表示取地址
    printf("%d\n", *(&c));  // 单目运算符*表示间接访问操作符（解引用操作符）
    int d = 0;
    printf("%d\n", ~d);     // 单目运算符~表示对一个数的二进制位取反
    /* 整数在内存中存储的是二进制的补码，打印的是该数的原码
     * 对于正数：
     *  原码 = 反码 = 补码
     * 对于负数：
     *  原码 -(除符号位取反)-> 反码 -(加1)-> 补码
     *  补码 -(减1)-> 反码 -(除符号位取反)-> 原码
     * 11111111111111111111111111111111  // ~b在内存中存储的二进制形式
     * 11111111111111111111111111111110
     * 10000000000000000000000000000001  // ~b的原码
     */

    int e = 1;
    int f = e++;  // 后置++，先使用，再++
    printf("e=%d, f=%d\n", e, f);
    e = 1;
    f = ++e;  // 前置++，先++，再使用
    printf("e=%d, f=%d\n", e, f);
    e = 1;
    f = e--;  // 后置--，先使用，再--
    printf("e=%d, f=%d\n", e, f);
    e = 1;
    f = --e;  // 前置--，先--，再使用
    printf("e=%d, f=%d\n", e, f);

    // sizeof计算变量或类型所占的空间大小（以字节为单位）
    printf("%llu %llu\n", sizeof(c), sizeof(int));
    printf("%llu\n", sizeof a);       // 对于变量，括号可以省略，sizeof是操作符，不是函数
    // printf("%llu\n", sizeof int);  // 对于类型，括号是不可省略
    int arr[] = {1, 2, 3};
    printf("%llu\n", sizeof(arr) / sizeof(arr[0]));  // 也可以用于计算数组元素个数

    // (类型)变量 表示强制类型转换
    int h = (int)3.14;  // double -> int
    h++;

    // -----------------逻辑操作符----------------
    // C语言中0为假，非0即为真
    printf("%d %d %d\n", 0 && 0, 0 && 3, 3 && 5);  // 逻辑与&&
    printf("%d %d %d\n", 0 || 0, 0 || 3, 3 || 5);  // 逻辑或||

    // -----------------条件操作符(三目操作符)----------------
    int x = 10, y = 20, max = 0;
    max = (x >= y ? x : y);
    printf("max=%d\n", max);

    return 0;
}