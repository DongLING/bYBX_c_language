 /*--------------------------------------------------------------
 ����L4_9.C���ܣ�����1-1/3+1/5-1/7+��ֱ�����һ��ľ���ֵС��1e-6��
 ---------------------------------------------------------------*/
 #include <stdio.h>
 void main()         
 {
  int n=1;
  float x=1,t=1,s=0;          /*x����ͨ�������ţ�tΪͨ��ֵ*/
  while (t>=1e-6)
    { t=1.0/(2*n-1);
      s=s+x*t;
      x= (-1)*x;
      n=n+1;
     }
  printf("1-1/3+1/5-1/7+�� =%f\n",s);
   }
 