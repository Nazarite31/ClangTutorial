#include <stdio.h>


// 常见关键字
// auto  break  case  char  const  continue  default  do  double  else  enum
// extern  float  for  goto  if  int  long  register  return  short  signed
// sizeof  static  struct  switch  typeof  union  unsigned  void  volatile  while

// 标识符不能和关键字冲突


void test(void)
{
    int x = 1;
    x++;
    printf("x = %d\n", x);
}


void test_static(void)
{
    static int y = 1;  // y是一个静态局部变量
    y++;
    printf("static y = %d\n", y);
}


extern Add(int, int);


int main(int argc, char* argv[])
{
    // -------------auto------------------
    auto int a = 0;  // 局部变量又称自动变量，在前面都有auto，通常省略

    // -------------break------------------
    // break使用场景：（1）循环（2）switch case语句

    // -------------register------------------
    // 计算机中存储数据的位置：（1）寄存器（2）高速缓存（3）内存（4）硬盘
    // 对于经常使用的变量b，使用register关键字可以建议编译器将b定义成寄存器变量
    // 是否采纳取决于编译器
    register int b = 10; 

    // -------------signed/unsigned------------------
    signed int c = -2;  // int定义的变量默认是有符号的,signed是省略的
    unsigned int d = 10;  // 定义无符号整数

    // -------------typedef------------------
    // 类型重定义
    typedef unsigned int u_int;
    u_int e = 10;  // e和f的类型都是unsigned int，u_int只是别名

    // -------------static------------------
    // 场景一：static修饰局部变量  静态局部变量
    // 局部变量的生命周期变长，出了作用域仍然存在，直至程序结束生命周期才结束
    int i = 0;
    while (i < 5) 
    {
        test();           // 2 2 2 2 2
        test_static();    // 2 3 4 5 6
        i++;
    }

    // 场景二：static 修饰全局变量  静态全局变量
    // 改变了全局变量的作用域，只能在本源文件内使用，不能在其他源文件内使用
    // 同级目录下test.c文件的内容：int g_num = 30;
    extern int g_num;
    printf("g_num = %d\n", g_num);
    // 同级目录下test.c文件的内容：static int g_num = 30;
    extern int g_num;  // 编译报错： undefined reference to `g_num'
    printf("g_num = %d\n", g_num);
  
    // 场景三：static修饰函数  静态函数
    // 改变了函数的链接属性，由外部链接属性变成了内部链接属性，只能在本源文件内使用，不能在其他源文件内使用
    printf("%d\n", Add(3, 5));

    return 0;
}