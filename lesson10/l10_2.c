 /*-----------------------------------------------
  程序L10 2.C功能：指针变量运算符&和*的使用
 ------------------------------------------------*/
 #include <stdio.h> 
 void main()
 {
  int a,b;
  int *p,*q; 
  a=3; 
  b=5;
  p=&a;  
  q=&b;  
  printf("%d , %d\n",*p,*q);
 }
