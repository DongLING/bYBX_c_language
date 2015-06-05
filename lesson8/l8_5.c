 /*-----------------------------------------------------
  程序L8_5.C功能：函数gets()与scanf()的区别。
 ------------------------------------------------------*/
 #include <stdio.h>
 void main()    
 {
  char str1[20],str2[20];
  gets(str1);
  scanf("%s",str2);
  printf("str1: %s\n",str1);
  printf("str2: %s\n",str2);
  }

