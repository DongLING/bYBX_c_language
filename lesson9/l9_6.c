 /*-----------------------------------------------------------
  程序L9_6.C功能：从键盘输入的圆半径，输出圆的周长和面积。
 -----------------------------------------------------------*/
 #include <stdio.h>
 #define  PI  3.14159
 #define  L(r)  2*PI*(r)
 #define  S(r)   PI*(r)*(r)
 void main()    
 {
  float  radius,circle,area;
  scanf("%f",&radius);
  circle=L(radius); 
  area=S(radius);
  printf("radius:%f\tcircle:%f\tarea:%f\n",radius,circle,area);}
 }
