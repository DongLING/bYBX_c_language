 /*--------------------------------------------------------------
  ����L9_5.C���ܣ��Ӽ�������ѧ��������ѧ�ţ����������Ļ�ϡ�
 --------------------------------------------------------------*/
 #include <stdio.h>
 #define  IN   scanf
 #define  OUT  printf
 #define  N  2
 void main()    
 {
  int i;
  char name[N][20];
  long num[N];
  OUT("Please input name and ID:\n");
  for(i=0;i<N;i++)
     {IN("%s",name[i]);
      IN("%ld",&num[i]);}
  for(i=0;i<N;i++)
     {OUT("%s\t",name[i]);
      OUT("%ld\n",num[i]);}
   }