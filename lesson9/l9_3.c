 /*----------------------------------------------------------
  程序L9_3.C功能：自动变量的特点示例。
  ----------------------------------------------------------*/
 #include <stdio.h>
 void f (int n)
 {
  auto int s=0;      /*auto可以省略*/
  s=s+1;
  printf("No.%d:s=%d\n",n,s);
 }

 void main()    
 {
  int num;
  for(num=1;num<4;num++)
      f (num);
  }
