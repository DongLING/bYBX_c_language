 /*-----------------------------------------------------------
  ����L12_6.C���ܣ�Ϊö�����ͱ�����ֵ
 -----------------------------------------------------------*/
 #include <stdio.h>
 void main()
 { 
  enum season {spring, summer, autumn, winter} s1,s2 ;
  s1=summer;
  s2=(enum  season)2;
  printf("s1=%d,s2=%d\n",s1,s2);
 }
