#include <stdio.h>
int main()
{
 int a=3,b=2;
 float c=2.5;
 c=(float)(a+b)/3+(int)c;
 printf("The result is:%f",c);
 return 0;
}