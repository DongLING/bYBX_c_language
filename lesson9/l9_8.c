 /*------------------------------------------------
  程序L9_8.C : 使用静态变量输出1到20 的阶乘。
 -------------------------------------------------*/
 #include <stdio.h>
 long f(n)
 {static long s=1;
  s=s*n;
  return s;}
 void main( )
 { int i;
   for (i=1;i<=10;i++)
      printf("%ld\t",f(i));
  }
