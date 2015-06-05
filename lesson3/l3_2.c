/*-----------------------------------------------------------------------
程序L3_2.C功能：判断方程ax2+bx+c=0是否有实数解，其中a、b、c由键盘输入
------------------------------------------------------------------------*/
/*
 * define varibles a,b,c,and intervarible p
 * input a,b,c
 * p=b*b-4*a*c
 * if (p>=0) output:there is a result!
 * else output:no result
 */

#include <stdio.h>

int main()                   /*主函数无返回值时使用空类型void*/
{
    float a,b,c,p,x1,x2;
    scanf ("a=%f,b=%f,c=%f",&a,&b,&c);
    p=b*b-4*a*c;           
    if (p>=0)
      printf("方程有实数解\n");
    else 
      printf("方程无实数解\n");
    return 0;
}
