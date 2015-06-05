 /*-------------------------------------------------------------------
  程序L8_12.C : 有3个英文字符组成的字符串，要求按照英文字母顺序输出。  --------------------------------------------------------------------*/
 #include <stdio.h>
 #include <string.h>
 void main( )                     
 {
  char name[3][20]={"John","jan","Anny"};
  char str[20];
  int i;
  /*字符串中所有字符转换为小写字母*/
  for(i=0;i<3;i++)
     strlwr(name[i]); 
  /*按照英文字母顺序排序*/
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