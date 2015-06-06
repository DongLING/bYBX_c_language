#include <stdio.h>
int max(x,y)
int x,y;
{int z;
 if (x<y) z=x;
   else z=y;
   return z;
   }

main(void)
{int a,b,c,d,e,f,g;
   printf("Please input six numbers (a,b,c,d,e,f):");
   scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f);
   g=max(a,b);
   g=max(c,g);
   g=max(d,g);
   g=max(e,g);
   g=max(f,g);
   printf("%d,%d,%d,%d,%d,%d,the min is %d\n",a,b,c,d,e,f,g);
   return 0;
}
