#include <stdio.h>

int main()
{
	int x;
	printf("\n\t\t     ���˵�\n");
	printf("\t\t================\n");
	printf("\t\t1������ѧ���ɼ�\n");
	printf("\t\t2����ѯѧ���ɼ�\n");
	printf("\t\t3����ӡ����ɼ�\n");
	printf("\t\t0���˳�ϵͳ\n");
	printf("\t\t================\n");
	printf("\t\t ��ѡ��0-3����\n");
	scanf("%d",&x);
	switch(x)
	{
	case 1:printf("\n\t\t  ������ѧ���ɼ�!");break;
	case 2:printf("\n\t\t  ���������ѧ����!");break;
	case 3:printf("\n\t\t  �������!");break;
	case 0:printf("\n\t\t  ллʹ��!");break;
	default:printf("\n\t\t �������?!!");}
	return 0;
}
