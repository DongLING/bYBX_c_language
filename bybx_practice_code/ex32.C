#include <stdio.h>
int main(void)
{
  float a,b,c,p;
  printf("Please input the value of a=,b=,c=\n");
  scanf("a=%f,b=%f,c=%f",&a,&b,&c);
  p=b*b-4*a*c;
  if (p>=0)
     printf("Ok");
  else
     printf("No");
  return 0;
}