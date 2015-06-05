 /*-------------------------------------------------------
  程序L8_4.C功能：函数puts()与printf()的区别。
 --------------------------------------------------------*/
 #include <stdio.h>
 void main()    
 {
  char str1[]="student",str2[]="teacher";
  puts(str1);
  puts(str2);
  printf("%s",str1);
  printf("%s\n%s",str1,str2);
  }
