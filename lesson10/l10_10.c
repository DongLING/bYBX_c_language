 /*---------------------------------------------------------------------
  程序L10_10.C功能：编写一个函数string_copy()完成strcpy()的作用，并验证。
 ----------------------------------------------------------------------*/
 #include <stdio.h>
 void string_copy(char *s1,char *s2)
 {
  for (;*s2!='\0';s1++,s2++)
       *s1=*s2;
  *s1='\0';
  }

 void main()    
 {
  char str1[20],str2[]="I like C";
  char *p1=str1,*p2=str2;
  string_copy(p1,p2);
  printf("str1: %s\t str2 : %s\n",str1,str2);
  }
