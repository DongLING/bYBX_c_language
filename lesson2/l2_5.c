/*-------------------------------------------------
  ����L2_5.C : ʮ���ơ��˽��ơ�ʮ���������ݼ������
--------------------------------------------------*/
#include <stdio.h>

int main( )
{
    int a,b,c,m,n;
    a=11;
    b=011;
    c=0x11;
    m=65;
    n=97;
    printf("ʮ����11����%d, �˽���11����%d, ʮ������11����%d,\n",a,b,c);
    printf("ʮ����  �˽���  ʮ������  �ַ�\n");
    printf("  65      %o       %x      %c,\n",m,m,m);
    printf("  97      %o       %x      %c,\n",n,n,n);
    return 0;
}