/*--------------------------------------------------
 程序L2_3.C功能：类型修饰符long和 unsigned的使用。
--------------------------------------------------*/
#include <stdio.h>

int main()
{
    char  a1,b1;
    unsigned char  a2,b2;
    int  x1,y1;
    long  x2,y2;
    a1=127;   b1=129;
    a2=127;   b2=129;
    x1=32767;   y1=32769;
    x2=32767;   y2=32769;
    printf("a1=%d, a2=%u, b1=%d, b2=%u\n",a1,a2,b1,b2);
    printf("x1=%d, x2=%ld, y1=%d, y2=%ld\n",x1,x2,y1,y2);
    return 0;
}
