#include <stdio.h>
#include <string.h>

/*
 * 字符串：由双引号引起来的一串字符称为字符串字面值，简称字符串
 * 字符串的结束标志是'\0'的转义字符
 * ASCII编码值：'\0'是0，'0'是48，a'是97,'A'是65
 * 在计算字符串长度时，'\0'不算作字符串内容
 * strlen()函数用于计算字符串长度
 */


int main(int argc, char* argv[])
{
    char arr1[] = "abc";  // 将字符串存放在字符数组中
    char arr2[] = {'a', 'b', 'c'};
    char arr3[] = {'a', 'b', 'c', '\0'};
    printf("char arr1: %s\n", arr1);  // %s格式符用于打印字符串
    printf("char arr2: %s\n", arr2);  // 没有结束标志，打印结果不一定是abc，可能后面会带一些随机值
    printf("char arr3: %s\n", arr3);  // abc

    printf("char arr1 length: %llu\n", strlen(arr1));  // 3
    printf("char arr2 length: %llu\n", strlen(arr2));  // 结果不是3，是随机值，遇到'\0'截止
    printf("char arr3 length: %llu\n", strlen(arr3));  // 3

    //转义字符
    printf("c:\test\32\test.c");  // 结果不是预想的路径，\t表示水平制表符
    printf("c:\\test\\32\\test.c");  // \\用于表示反斜杠，防止被解析成转义序列符
    printf("\?\?)");  // \?用于在书写多个连续问号时，防止被解析成三子母符
    printf("%c\n", '\'');  // \'用于表示字符常量'
    printf("%s\n", "\"");  // \"用于表示一个字符串内部的双引号

    printf("%llu\n", strlen("c:\test\32\test.c"));  // 结果是13，不是14, \32是1个字符
    printf("%llu\n", strlen("c:\test\382\test.c"));  // 结果是15, \382是3个字符
    printf("%llu\n", strlen("c:\test\x61\test.c"));  // 结果是13, \x61是1个字符
    // '\32'是八进制32转化为十进制后（26）所代表的字符
    // \ddd，ddd表示1-3个八进制的数字
    // \xdd, dd表示2个十六进制数字
    printf("%c\n", '\32');
    printf("%s\n", "\382");
    printf("%c\n", '\x61');

    return 0;
}