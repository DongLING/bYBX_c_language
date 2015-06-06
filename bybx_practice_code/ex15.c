#include <stdio.h>
main(void)
{
   printf("a=%5d,b=%-6.2f,c=%c,d=%s",12,3.456,'A',"hello\n");
   printf("x=%d,y=%6.2f,z=%2d\n",2,78.9999,300);
   int a=3;
   printf("%d+%d=%d?\n",a,12,a+15);
   return 0;
}
