 /*------------------------------------------------------
  程序L6_2.C功能：形参改变不影响实参示例。
  ------------------------------------------------------*/
 #include <stdio.h>
 
 void change(int x,int y)
 {
  int t;
  printf ("x=%d,y=%d\n",x,y);
  t=x;  x=y;  y=t;
  printf ("x=%d,y=%d\n",x,y);
 }

 void main()    
 {
  int a=3,b=4;
  printf ("a=%d,b=%d\n",a,b);
  change(a,b);
  printf ("a=%d,b=%d\n",a,b);
 }
