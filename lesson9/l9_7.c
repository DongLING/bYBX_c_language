 /*----------------------------------------------------------------------
 程序L9_7.C功能：输入一个字符串，输出其长度。
 -----------------------------------------------------------------------*/
 #include  <stdio.h>
 #include  "L9_7_1.c"
 void main()    
 { 
  char string[20];
  scanf("%s",string);
  printf("There are %d characters.\n",string_len(string)); 
 }
