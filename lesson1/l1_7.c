/*-----------------------------------------------------------------------
  ����L1_7.C : �Ӽ��������������������е��������
----------------------------------------------------------------------*/
#include <stdio.h>

int main( )
{
    int a,b,c,d;
    printf("please input three numbers (a,b,c) :");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>b) d=a;
    else d=b;
    if (c>d) d=c;
    printf("%d,%d,%d,the max is: %d\n",a,b,c,d);
    return 0;
}
