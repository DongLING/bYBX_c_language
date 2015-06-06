#include<stdio.h>
main(void)
{int a,b,c,m,n;
 a=11;b=011;c=0x11;m=65;n=97;
 printf("十进制11等于%d,八进制11等于%d,十六进制11等于%d\n",a,b,c);
 printf("十进制 八进制 十六进制 字符\n");
 printf(" 65    %o     %x      %c\n",m,m,m);
 printf(" 97    %o     %x      %c\n",n,n,n);
   return 0;
}
