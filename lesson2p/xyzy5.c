/*-----------------------------------------------------------------
   ����L2_8.C : ��дһ��������������һ��ѧ����������ѧ�š�Ӣ�
   ��ѧ��������ɼ������ѧ��������ѧ�ź�ƽ���ɼ���
---------------------------------------------------------------*/
#include <stdio.h>

int main( )
{
    char name1[31],name2[31];      /*����name[31]�����Է�30���ַ���15������*/
    long num1,num2;           /*��ֵ����32767�ĺ��룬��Ҫ�ó�����*/
    int eng1,math1,comp1,eng2,math2,comp2;
    float aver1,aver2;
    printf("Please input the 1st student's name:");
    scanf("%s",name1);
/*�ַ����ø�ʽ��"%s"������������nameǰ����Ҫȡַ��"&"*/
    printf("Please input the 1st student's ID:");
    scanf("%ld",&num1);       /*long�ͱ����ĸ�ʽ����%ld*/
    printf("Please input the 1st student's scores (English1,math1,computer1):");
    scanf("%d,%d,%d",&eng1,&math1,&comp1);
    aver1=(eng1+math1+comp1)/3.0;
    printf("the 1st student's name is %s , his ID is %ld ,his average score is %.1f \n",name1,num1,aver1);

    printf("Please input the 2nd student's name:");
    scanf("%s",name2);
/*�ַ����ø�ʽ��"%s"������������nameǰ����Ҫȡַ��"&"*/
    printf("Please input the 2nd student's ID:");
    scanf("%ld",&num2);       /*long�ͱ����ĸ�ʽ����%ld*/
    printf("Please input the 2nd student's scores (English,math,computer):");
    scanf("%d,%d,%d",&eng2,&math2,&comp2);
    aver2=(eng2+math2+comp2)/3.0;
    printf("the 2nd student's name is %s , his ID is %ld ,his average score is %.1f \n",name2,num2,aver2);
    return 0;
  }

