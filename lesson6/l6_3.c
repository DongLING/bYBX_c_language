 /*-------------------------------------------------------------
   程序L6_3.C功能：实参可以是常量、变量、表达式或函数。
  -------------------------------------------------------------*/
 #include <stdio.h>
 
 void main()    
 { 
  float min(float x,float y);      /*函数定义在调用的函数之后，所以要先声明*/  
  float a=3.9,b=4.1;
  printf ("%.1f\n",min(a,b));
  printf ("%.1f \n",min(5,a*b));
  printf ("%.1f \n",min(b-1,min(a,b)));
  }

 float min(float x,float y)
 { return (x<y?x:y); }
