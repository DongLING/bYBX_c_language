 /*------------------------------------------------------------------------
 ����L9_2.C���ܣ���֪һ��һά���飬��һ���������������������С����ƽ����
 --------------------------------------------------------------------*/
 #include <stdio.h>
 int Num,Max,Min;

 int average(int array[])
 {
  int i;
  int array_aver=array[0];
  Max=Min=array[0];
  for(i=1;i<Num;i++)
    {if(array[i]>Max) Max=array[i];
     if(array[i]<Min) Min=array[i];
     array_aver+=array[i];}
  array_aver/=Num;
  return array_aver;
 }

 void main()
 {
  int aver,n[5]={23,2,4,5,6};
  Num=5;
  aver=average(n);
  printf("max=%d,min=%d,average=%d\n",Max,Min,aver);
 }
