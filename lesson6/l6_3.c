 /*-------------------------------------------------------------
   ����L6_3.C���ܣ�ʵ�ο����ǳ��������������ʽ������
  -------------------------------------------------------------*/
 #include <stdio.h>
 
 void main()    
 { 
  float min(float x,float y);      /*���������ڵ��õĺ���֮������Ҫ������*/  
  float a=3.9,b=4.1;
  printf ("%.1f\n",min(a,b));
  printf ("%.1f \n",min(5,a*b));
  printf ("%.1f \n",min(b-1,min(a,b)));
  }

 float min(float x,float y)
 { return (x<y?x:y); }
