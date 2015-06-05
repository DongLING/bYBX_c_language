/*----------------------------------------------------
程序L1_9.C : 已知三角形边长求面积
---------------------------------------------------*/
#include <stdio.h>
#include <math.h>                     /*头文件math.h中含函数sqrt()的定义*/

int main( )
{    float a,b,c,s,area;
     a=3;
     b=4;
     c=5;
     s=(a+b+c)/2;
     area=sqrt(s*(s-a)*(s-b)*(s-c));   /*函数sqrt()用于求一个数的平方*/
     printf("%4.1f, %4.1f, %4.1f,area is %4.2f\n",a,b,c,area);
     return 0;
}
