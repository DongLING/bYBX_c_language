 /*------------------------------------------------------------
  程序L8_7.C功能：编写一个函数string_copy()完成strcpy()的作用，并验证。
 ------------------------------------------------------------*/
 #include <stdio.h>
 #include <string.h>
 void string_copy(char string1[],char string2[])
 {int i;
  for (i=0;string2[i]!='\0';i++)
      string1[i]=string2[i];
  string1[i]='\0';
  }

 void main()    
 {char str1[20],str2[]="I like C";
  char str3[20],str4[]="I like C";
  strcpy(str1,str2);
  string_copy(str3,str4);
  printf("str1: %s\t str2 : %s\n",str1,str2);
  printf("str3: %s\t str4 : %s\n",str3,str4);
 }
