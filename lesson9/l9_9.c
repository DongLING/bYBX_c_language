 /*-------------------------------------------------
 程序L9_9.C : 重新定义C语言的输出格式。
 --------------------------------------------------*/
 #include <stdio.h>
 #define  OUT  printf
 #define  Enter  printf("\n")
 #define  NL  "\t"
 #define  D  "%d"
 #define  D1  D  
 #define  D2  D  NL  D
 #define  F  "%f"
 #define  F1  F  
 #define  F2  F  NL  F
 #define  S  "%s"
 void main( )                     
 {
  int a=0,b=1;
  float x=1.5,y=2.5;
  char str[]="Hello";
  OUT(D1,a); Enter;
  OUT(D2,a,b); Enter;
  OUT(F1,x); Enter;
  OUT(F2,x,y); Enter;
  OUT(S,str); Enter; 
  }
