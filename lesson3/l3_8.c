 /*-----------------------------------------------------------------
   程序L3_8.C : 从键盘输入1~7之间的数字，输出对应星期中的英文单词。
   -----------------------------------------------------------------*/
 #include <stdio.h>
 main( )                               
 { 
  char  w;
  scanf("%c",&w);              
  switch (w)
  { case '0': printf("Sunday\n",w); break;   
    case '1': printf("Monday\n",w); break;
    case '2': printf("Tuesday\n",w); break;
    case '3': printf("Wednesday\n",w); break;
    case '4': printf("Thursday\n",w); break;
    case '5': printf("Friday\n",w); break;
    case '6': printf("Saturday\n",w); break;
    }
   }
