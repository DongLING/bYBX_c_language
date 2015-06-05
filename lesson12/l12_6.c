 /*-----------------------------------------------------------
  程序L12_6.C功能：为枚举类型变量赋值
 -----------------------------------------------------------*/
 #include <stdio.h>
 void main()
 { 
  enum season {spring, summer, autumn, winter} s1,s2 ;
  s1=summer;
  s2=(enum  season)2;
  printf("s1=%d,s2=%d\n",s1,s2);
 }
