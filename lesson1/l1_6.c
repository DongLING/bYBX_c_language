/*--------------------------------------------------------------------
����L1_6.C���ܣ�scanf()������ʹ�� -----------------------------------*/
#include <stdio.h>

int main()
{
     int x,y,a1,b1,c1,a2,b2,c2;
     scanf("x=%d,y=%d",&x,&y);
     scanf("%d,%d,%d",&a1,&b1,&c1);
     scanf("%d%d%d",&a2,&b2,&c2);
     printf("x=%d,y=%d\n",x,y);
     printf("a1=%d,b1=%d,c1=%d\n",a1,b1,c1);
     printf("a2=%d,b2=%d,c2=%d\n",a2,b2,c2);
     return 0;
}
