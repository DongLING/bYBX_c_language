 /*--------------------------------------------------------
  ����L6_6.C : �����η���sin(x)+x���Ķ����֣�������Ϊ3��1��
  ---------------------------------------------------------*/
 #include <stdio.h>
 #include <math.h>

 double f(double x)   /*���屻������*/
 {
  return (sin(x)+x);
 }

 double integral(double x,double y,int n)
 {
  double h,t=0,s;
  int i;
  h=(y-x)/n;
  for(i=1;i<n;i++)
     t+=f(x+i*h);
  s=((f(x)+f(y))/2+t)*h;
  return s;}

 void main( )
 {
  double a=1,b=3,sum;
  int n=1000;
  sum=integral(a,b,n);
  printf("the result is %f\n",sum);
  }
