#include <stdio.h>

/*
 * 数组：一组相同类型元素的集合
 * 连续存储
 * 下标从0开始依次递增至n-1，n为数组长度
 */


int main(int argc, char* argv[])
{
    // 创建一个存有10个int类型元素的数组并赋初值
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("arr[4]=%d\n", arr[4]);  // 通过下标访问数组元素

    // 遍历数组，数组元素是连续存储的，每个元素占sizeof(int)
    for (int i = 0; i < 10; i++)
    {
        printf("%p --> %d\n", &arr[i], arr[i]);
    }

    printf("size of int: %llu\n", sizeof(int));

    return 0;
}