#include<stdio.h>
main(void)
{
  char a1,b1;
  unsigned char a2,b2;
  short int x1,y1;
  long int x2,y2;
  a1=127;b1=129;
  a2=127;b2=129;
  x1=32767;y1=32769;
  x2=32767L;y2=32769L;
  printf("a1=%d,b1=%d\n",a1,b1);
  printf("a2=%u,b2=%u\n",a2,b2);
  printf("x1=%d,y1=%d\n",x1,y1);
  printf("x2=%ld,y2=%ld",x2,y2);
  return 0;
}
