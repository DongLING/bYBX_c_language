/*-----------------------------------------------------------------
   ����L2_8.C : ��дһ��������������һ��ѧ����������ѧ�š�Ӣ�
   ��ѧ��������ɼ������ѧ��������ѧ�ź�ƽ���ɼ���
---------------------------------------------------------------*/
#include <stdio.h>

int main( )
{
    char name[31];      /*����name[31]�����Է�30���ַ���15������*/
    long num;           /*��ֵ����32767�ĺ��룬��Ҫ�ó�����*/
    int eng,math,comp;
    float aver;
    printf("Please input the student's name:");
    scanf("%s",name);
/*�ַ����ø�ʽ��"%s"������������nameǰ����Ҫȡַ��"&"*/
    printf("Please input the student's ID:");
    scanf("%ld",&num);       /*long�ͱ����ĸ�ʽ����%ld*/
    printf("Please input scores (English,math,computer):");
    scanf("%d,%d,%d",&eng,&math,&comp);
    aver=(eng+math+comp)/3.0;
    printf("the student's name is %s , his ID is %ld ,his average score is %.1f \n",name,num,aver);
    return 0;
  }

