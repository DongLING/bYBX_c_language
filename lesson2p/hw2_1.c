/*-------------------------------------------------
  程序L2_5.C : 十进制、八进制、十六进制数据及其输出
--------------------------------------------------*/
#include <stdio.h>

int main( )
{
    char a,b,m,n,o,p;
    a='0';
    b='9';
    m='A';
    n='Z';
    o='a';
    p='z';
    printf("十进制  八进制  十六进制  字符\n");
    printf("  %d      %o       %x      %c\n",a,a,a,a);
    printf("  %d      %o       %x      %c\n",b,b,b,b);
    printf("  %d      %o       %x      %c\n",m,m,m,m);
    printf("  %d      %o       %x      %c\n",n,n,n,n);
    printf("  %d      %o       %x      %c\n",o,o,o,o);
    printf(" %d      %o       %x      %c\n",p,p,p,p);
    return 0;
}
