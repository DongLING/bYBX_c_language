/*-----------------------------------------------------------------------
����L3_2.C���ܣ��жϷ���ax2+bx+c=0�Ƿ���ʵ���⣬����a��b��c�ɼ�������
------------------------------------------------------------------------*/
/*
 * define varibles a,b,c,and intervarible p
 * input a,b,c
 * p=b*b-4*a*c
 * if (p>=0) output:there is a result!
 * else output:no result
 */

#include <stdio.h>

int main()                   /*�������޷���ֵʱʹ�ÿ�����void*/
{
    float a,b,c,p,x1,x2;
    scanf ("a=%f,b=%f,c=%f",&a,&b,&c);
    p=b*b-4*a*c;           
    if (p>=0)
      printf("������ʵ����\n");
    else 
      printf("������ʵ����\n");
    return 0;
}
