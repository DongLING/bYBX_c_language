#include <stdio.h>
int max(x,y)
int x,y;
{int z;
 if (x>y) z=x;
   else z=y;
   return z;
   }

main(void)
{int a,b,c,d;
   printf("Please input three numbers (a,b,c):");
   scanf("%d,%d,%d",&a,&b,&c);
   d=max(a,b);
   d=max(c,d);
   printf("%d,%d,%d,the max is %d\n",a,b,c,d);
   return 0;
}
