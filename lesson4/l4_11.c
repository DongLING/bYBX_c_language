 /*-------------------------------------------------
  程序L4_11.C : 计算Fibonacci数列的前30项，并输出。
 --------------------------------------------------*/
 #include <stdio.h>
 main( )                               
 { 
  long f1=1,f2=1,f3;
  int i;
  printf("  %9ld  %9ld",f1,f2);
  for (i=3;i<=30;i++)            /*i++等价与i=i+1*/
    { f3=f1+f2;
      printf("  %9ld",f3);
      f1=f2;
      f2=f3;
      if (i%5==0) printf("\n");     /*控制一行输出5个数*/
     }
  }              
