 /*---------------------------------------------------------------------
  程序L8_11.C : 输入一行字符，统计其中单词的个数。约定单词之间以空格分隔。
 ---------------------------------------------------------------------*/
 #include <stdio.h>
 void main( )                     
 {
  char string[100];
  int i ,num=0,letter=0;   
  /*letter为0时记录前一状态为空格状态，letter为1时前一状态为字符状态*/
  gets(string);
  for (i=0;string[i]!='\0';i++)
    { if(string[i]==' '&&letter==1)
          letter=0;
      if(string[i]!=' '&&letter==0)
          { letter=1;
            num++;
           }
     }
  printf("There are %d words.\n",num);
  }
