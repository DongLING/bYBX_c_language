 /*----------------------------------------------------------------
  程序L5_1.C功能：计算a+3*-2/(int)(a+b)-12的结果，其中a=1.7,b=2.4。
  -----------------------------------------------------------------*/
 #include <stdio.h>
 void main()         
 {
  float a=1.7,b=2.4,s;
  s= a+3*-2/(int)(a+b)-12;
  printf("result is %f\n",s);
  }
