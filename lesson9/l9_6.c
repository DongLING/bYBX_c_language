 /*-----------------------------------------------------------
  ����L9_6.C���ܣ��Ӽ��������Բ�뾶�����Բ���ܳ��������
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
