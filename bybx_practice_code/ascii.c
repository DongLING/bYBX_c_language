//你从键盘上输入任意一个字符,该程序就输出该字符的ASCII码!
#include <stdio.h>
main(void)
{
  char a;
    printf("输入任意一个字符:\n");
    scanf("%c",&a);
    printf("你输入的字符的DEC(Decimal) ASCII码为:%u\n",a);
    printf("你输入的字符的HX(Hexadecimal) ASCII码为:%x\n",a); 
    printf("你输入的字符的OCT(Octal) ASCII码为:%o\n",a);
   return 0;
}
