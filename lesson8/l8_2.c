 /*----------------------------------------------------------------
  程序L8_2.C功能：函数putchar()的使用。
 ----------------------------------------------------------------*/
 #include <stdio.h>
 void main()    
 {
  char c='A';
  int n='B';
  putchar(c);            /*输出字符型变量*/
  putchar(n);            /*输出整型变量*/
  putchar('C');          /*输出字符型常量*/
  putchar('\x44');       /*输出字符D*/
  putchar('\n');         /*输出回车*/
  printf("%c%cC\x44\n",c,n);
 }
