#include<stdio.h>
main(void)
{ char c;
  printf("请输入1个大写字母:");
  scanf("%c",&c);
  c=c+32;        /*大写字母的ASCII码加上32为其对应的小写字母*/
  printf("其小写字母为:%c\n",c);  
  return 0;
}
