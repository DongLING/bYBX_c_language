 /*--------------------------------------------------------------
  程序L9_1.C功能：局部变量使用示例。
  --------------------------------------------------------------*/
 #include <stdio.h>
 void f2(int x,int y)
 { x++; y++;}

 void f1(int x,int y)
 {
  int n=0;
  f2(x, y);
  printf("n=%d,x=%d,y=%d\n",n,x,y);
  }

 void main()
 {
  int n=2,a=3,b=4;
  f1(a,b);
  printf("n=%d,a=%d,b=%d\n",n,a,b);
 }
