#include<stdio.h> 
int main(void) 
{
    int num1,num2; 
    scanf("%2d%*2d%3d",&num1,&num2);  //跳过3位整数，即读取3位整数到丢弃掉 
    printf("num1=%d,num2=%d\n",num1,num2);
    return 0;
}
/*
1234567
num1=12,num2=567
请按任意键继续. . .
*/