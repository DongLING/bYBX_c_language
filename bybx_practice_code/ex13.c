#include <stdio.h>
float max(float x,float y)
{float z;
  if (x>y) z=x;
  else z=y;
  return z;
}
int main(void)
 {float a,b,c;
 printf("Please input two numbers (a,b):");
 scanf("%f,%f",&a,&b);
 c=max(a,b);
   printf("%f,%f,the max is %f\n",a,b,c);
   return 0;
}
