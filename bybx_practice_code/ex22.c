#include<stdio.h>
main(void)
{char c1,c2,c3,c4;
  c1='A';c1=c1+32;
  c2= 65;c2=c2+32;
  c3='\101';c3=c3+32;
  c4='\x41';c4=c4+32;
   printf("c1=%c,c2=%c,c3=%c,c4=%c\n",c1,c2,c3,c4);
   printf("c1=%d,c2=%d,c3=%d,c4=%d\n",c1,c2,c3,c4);
   return 0;
}
