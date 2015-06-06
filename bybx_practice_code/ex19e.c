#include <stdio.h>
main(void)
{float f,c;
   printf("Please input a temperature in F:\n");
   scanf("%f",&f);
   c=(f-32)/1.8;  
   printf("The temperature in C is:%3.1fC°\n",c);
   return 0;
}
