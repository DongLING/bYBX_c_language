 /*-------------------------------------------------------------------
  ����L8_12.C : ��3��Ӣ���ַ���ɵ��ַ�����Ҫ����Ӣ����ĸ˳�������  --------------------------------------------------------------------*/
 #include <stdio.h>
 #include <string.h>
 void main( )                     
 {
  char name[3][20]={"John","jan","Anny"};
  char str[20];
  int i;
  /*�ַ����������ַ�ת��ΪСд��ĸ*/
  for(i=0;i<3;i++)
     strlwr(name[i]); 
  /*����Ӣ����ĸ˳������*/
  if (strcmp(name[0],name[1])>0) 
     {strcpy(str,name[0]);
      strcpy(name[0],name[1]); 
      strcpy(name[1],str);
     }
  if (strcmp(name[0],name[2])>0) 
     {strcpy(str,name[0]);
      strcpy(name[0],name[2]); 
      strcpy(name[2],str);
     }
  if (strcmp(name[1],name[2])>0) 
     {strcpy(str,name[1]);
      strcpy(name[1],name[2]); 
      strcpy(name[2],str);
     }
  for(i=0;i<3;i++)
     printf("%s\n",name[i]); 
 }
