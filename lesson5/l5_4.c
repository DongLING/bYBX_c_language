 /*----------------------------------------------------------------
  程序L5_4.C功能：逻辑运算符及表达式。
  -----------------------------------------------------------------*/
 #include <stdio.h>
 void main()
 {
  printf("%d,%d,%d,%d\n",(4>3)&&(5>1),(4<3)&&(5>1),(4>3)&&(5<1),(4<3)&&(5<1));
  printf("%d,%d,%d,%d\n",(4>3)||(5>1),(4<3)||(5>1),(4>3)||(5<1),(4<3)||(5<1));
  printf("%d,%d\n",!(4>3),!(4<3));
  }



