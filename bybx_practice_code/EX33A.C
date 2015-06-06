#include <stdio.h>
int main()
{
 float a,b,c,t;
 scanf("%f,%f,%f",&a,&b,&c);
 if (a<b)
  {
   t=a;a=b;b=t;
   }
  if (a<c)
   {
   printf("%6.2f,%6.2f,%6.2f\n",c,a,b);
   }
   else
    {if (c>b)
        printf("%6.2f,%6.2f,%6.2f\n",a,c,b);
         else printf("%6.2f,%6.2f,%6.2f\n",a,b,c);
         }
return 0;
}