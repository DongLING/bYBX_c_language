 /*-------------------------------------------------------------------------
  程序L10_12.C功能：编写一个函数string_cut(char *str,char c)，如果字符串str
   中包含字符变量c，则输出其后的字符序列，否则输出空字符。。
 -------------------------------------------------------------------------*/
 #include <stdio.h>
 void string_cut(char *str , char c)
 {
  for (;*str!='\0'&&*str!=c;str++);
  puts(str);
  }

 void main()    
 {
  char  string[20]="Beijing";
  char  ch;
  scanf("%c",&ch);
  string_cut(string,ch);
  }
