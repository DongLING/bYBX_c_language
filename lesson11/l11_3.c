 /*---------------------------------------------------------------------
  程序L11_3.C功能：编写并验证一个函数，可以用梯形法求不同函数的积分。
 ----------------------------------------------------------------------*/
 #include <stdio.h>
 #include <math.h>

 double f1(double x)
 { return  (1/(x+1)); }

 double f2(double x)
 { return  (sin(x)); }

 double integral(double x, double y, double (*func)(), int n)
 { double h,t=0,s;
   int i;
   h=(y-x)/n;
   for(i=1;i<n;i++)
      t+=(*func)(x+i*h);
   s=(((*func)(x)+ (*func)(y))/2+t)*h;
   return s;}

 void main( )
 { printf("%f\n", integral(1,2,f1,1000));
   printf("%f\n", integral(1,3,f2,1000));
  }

