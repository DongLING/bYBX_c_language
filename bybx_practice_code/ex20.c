#include<stdio.h>
#include <math.h>
main(void)
{float a,b,c,s,area;
   printf("Please input tree numbers (a,b,c)\n");
   scanf("%f,%f,%f",&a,&b,&c);
   s=(a+b+c)/2;
   area= sqrt(s);
   printf("%f,%f,%f,Answer is %4.2f\n",a,b,c,area);
   return 0;
}
