/*-----------------------------------------------------------------  
 程序L3_1.C功能：求ax*x+bx+c=0方程的解。a、b、c由键盘输入，且b*b-4ac>0。
------------------------------------------------------------------*/
/*
 * Pseudocode below:
 * Input a,b,c
 * p=sqrt(b*b-4*a*c)
 * compute x1 and x2:
 * x1=(-b+p)/(2*a)
 * x2=(-b-p)/(2*a)
 * output x1,x2
 */ 

#include <stdio.h>
#include <math.h>

int main()                   
{
    float a,b,c,p,x1,x2;
    scanf ("a=%f,b=%f,c=%f",&a,&b,&c);
    p=sqrt(b*b-4*a*c);
    x1=(-b+p)/(2*a);
    x2=(-b-p)/(2*a);
    printf("x1=%6.2f, x2=%6.2f\n",x1,x2);
}
