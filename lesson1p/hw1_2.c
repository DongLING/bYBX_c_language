#include <stdio.h>


int main()
{
    float a,b,c,d,e,f,min;
    printf("Please input 6 float numbers (a,b,c,d,e,f):\n");
    scanf("%f,%f,%f,%f,%f,%f",&a,&b,&c,&d,&e,&f);
    if (a>b) min=b;
      else min=a;
    if (c<min) min=c;
    if (d<min) min=d;
    if (e<min) min=e;
    if (f<min) min=f;
    printf("min is:%f\n",min);
    return 0;
}