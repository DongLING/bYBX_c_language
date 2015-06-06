#include <stdio.h>
#include <math.h>
int main()
{
 float a,b,c,p,x1,x2;
 scanf("a=%f,b=%f,c=%f",&a,&b,&c);
 p=sqrt(b*b-4*a*c);
 x1=(-b+p)/(2*a);
 x2=(-b-p)/(2*a);
 printf("x1=%6.4f,x2=%6.4f",x1,x2);
 return 0;
 }