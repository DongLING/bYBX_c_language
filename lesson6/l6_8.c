 /*---------------------------------------------------------------
   ����L6_8.C : ��֪�ݹ鹫ʽ������xֵ�����qn(x)��ǰ10��ֵ��
  ----------------------------------------------------------------*/
 #include <stdio.h>

 double  q(float x,int n)
 {
  if (n==0)  return 1.0;
  else if (n==1)  return x;
       else return (2*x*q(x,n-1)-q(x,n-2));
 }

 void main()
 {
  float x;
  int n;
  scanf("%f",&x);
  for(n=0;n<10;n++)
      printf("%f   ",q(x,n));
  printf("\n");
  }
