 /*------------------------------------------------------------
 程序L8_8.C功能：编写一个函数string_compare()完成strcmp()的作用，并验证。
 -----------------------------------------------------------*/
 #include <stdio.h>
 #include <string.h>
 int string_compare(char string1[],char string2[])
 { int i=0;
   while(string1[i]==string2[i]&&string1[i]!='\0')
      i++;
    return string1[i]-string2[i];
 }
 
 void main()    
 { 
 char str1[]="abc",str2[]="abc";
 printf("%d, %d\n", strcmp(str1,str2),string_compare(str1,str2));
 }
