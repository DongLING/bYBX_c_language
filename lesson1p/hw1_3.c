#include <stdio.h>

float max(float x,float y)
{
    float z;
    if (x>y) z=x;
      else z=y;
    return z;
}

int main()
{
    float a,b,c,d,e,f,result;
    printf("Please input 6 float numberesults (a,b,c,d,e,f):\n");
    scanf("%f,%f,%f,%f,%f,%f",&a,&b,&c,&d,&e,&f);
    result=max(a,b);
    result=max(result,c);
    result=max(result,d);
    result=max(result,e);
    result=max(result,f);
    printf("max is:%4.2f\n",result);
    return 0;
}