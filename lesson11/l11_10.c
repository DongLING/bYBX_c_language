 /*------------------------------------------------------------
  ����L11_10.C���ܣ�����ѧ����ź������ѧ����ȫ���ɼ���
 -------------------------------------------------------------*/
 #include <stdio.h>
 
 float *search(float (*p)[4], int n )
 {
  float *pt;
  pt=*(p+n);
  return pt;
 }
 
 void main()
 {
   static float score[ ][4]={{62,70.5,87,77},{57,89,65,83},{72,78,60,91}};
   float *p;
   int i,m;
   printf("Enter the number of student:");
   scanf("%d",&m);
   printf("The scores of No.%d are:\n",m);
   p=search(score,m);
   for(i=0;i<4;i++) 
      printf("%5.2f\t",*(p+i));
  }
