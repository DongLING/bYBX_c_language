/*---------------------------------------------------------------------------------
 程序L1_3.C ：输入 a、b两个数，输出其中最大数
-----------------------------------------------------------------------------------*/
#include <stdio.h>                      /* 包含输入输出头文件 */

float max(float x, float y)             /* 定义求x、y的最大值的函数max*/
{   float z;                            /* 定义实数变量z*/
    if (x>y) z=x;                       /* 如果x大于y，则z等于x */
    else z=y;                           /* 否则z 等于y */
    return z;                           /* 返回z, 则max函数值为z的值 */
}

int main( )                                       /* 定义主函数 */
{   float a,b,c;                                  /* 定义实数变量a、b、c */
    printf("Please input two numbers (a,b):");    /* 屏幕出现提示信息 */
    scanf("%f,%f",&a,&b);                         /* 从键盘输入a、b */
    c=max(a,b);                                   /* c等于a、b的最大数 */
    printf("%6.4f,%6.4f,the max is: %6.4f\n",a,b,c);       /* 输出a、b值和最大数c的值 */
    return 0;
}
