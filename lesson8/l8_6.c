 /*--------------------------------------------------------
  程序L8_6.C功能：函数strlen()的使用。
 -------------------------------------------------------*/
 #include <stdio.h>
 #include <string.h>
 void main()    
 { 
  int i;
  char str1[20],str2[20];
  gets(str1);  gets(str2);
  for(i=0;str2[i]!='\0';i++);    /*求字符数组str2中字符串的字符个数*/
  printf("%s : %d\n",str1,strlen(str1));
  printf("%s : %d\n",str2,i);
  printf("%s : %d\n","I like C",strlen("I like C"));
  }
