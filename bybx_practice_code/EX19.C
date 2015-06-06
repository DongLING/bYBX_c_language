#include <stdio.h>
#include <math.h>
main()
{float a,b,c,s,area;
   a=3;b=4;c=5;
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("%4.1f,%4.1f,%4.1f,area is:%4.2f\n",a,b,c,area);
   return 0;
}
