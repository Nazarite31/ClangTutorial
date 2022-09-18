#include <stdio.h>

// 常见关键字
// auto  break  case  char  const  continue  default  do  double  else  enum
// extern  float  for  goto  if  int  long  register  return  short  signed
// sizeof  static  struct  switch  typeof  union  unsigned  void  volatile  while

// 标识符不能和关键字冲突

int main(int argc, char* argv[])
{
    auto int a = 0;  // 局部变量又称自动变量，在前面都有auto，通常省略

    // break使用场景：（1）循环（2）switch case语句

    // 计算机中存储数据的位置：（1）寄存器（2）高速缓存（3）内存（4）硬盘

    // 对于经常使用的变量b，使用register关键字可以建议编译器将b定义成寄存器变量
    // 是否采纳取决于编译器
    register int b = 10; 

    signed int c = -2;  // int定义的变量默认是有符号的,signed是省略的
    unsigned int d = 10;  // 定义无符号整数

    return 0;
}