#include <stdio.h>
int main()
{
  float x,y,t;
  scanf("%f,%f",&x,&y);
  if (x<y)
      {t=x;
       x=y;
       y=t;
      }
  printf("%6.2f,%6.2f,%6.2f",x,y,z);
  return 0;
}