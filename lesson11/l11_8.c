 /*-----------------------------------------------
  程序L11_8.C功能：命令行参数演示
 ------------------------------------------------*/
 #include <stdio.h>
 void main(int argc,char *argv[ ])
 { 
  int i;
  printf("argc=%d\n",argc);
  for(i=1;i<argc;i++)
     printf("%s  ",argv[i]);
  printf("\n");
  }
