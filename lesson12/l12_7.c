 /*--------------------------------------------------- 
   程序L12_7.C功能：枚举变量作为循环控制变量
 ----------------------------------------------------*/
 #include <stdio.h>
 void main()
 {  enum  season {spring=1, summer, autumn, winter} s ;
    for (s=spring;s<=winter;s++)
      printf("%d  ",s);
  }
