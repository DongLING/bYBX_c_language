 /*--------------------------------------------------------------
  程序L5_8.C功能：逗号运算符的演示示例。
  --------------------------------------------------------------*/
 #include <stdio.h>
 void main()         
 {
  int a=3,b=4,c=1,max,t;
  if (a>b,a>c) max=a;
  else max=0;
  t=(a+3,b+1,++c);
  printf("max=%d,t=%d\n",max,t);
  }
