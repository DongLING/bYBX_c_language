 /*-------------------------------------------------------------------------
  ����L10_12.C���ܣ���дһ������string_cut(char *str,char c)������ַ���str
   �а����ַ�����c������������ַ����У�����������ַ�����
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