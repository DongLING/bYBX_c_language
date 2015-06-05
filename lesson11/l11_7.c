 /*-----------------------------------------------
  程序L11_7.C功能：使用指向指针的指针
 -----------------------------------------*/
 #include <stdio.h>
 void main()
 {
   static char *str[]={"How","are","you"};
   char **p;
   p=str+1; 
   printf("%s\n",*p);
   printf("%c\n",**p);
  }
