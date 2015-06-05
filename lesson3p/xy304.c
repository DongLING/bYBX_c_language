#include <stdio.h>

int main()
{
	int x;
	printf("\n\t\t     主菜单\n");
	printf("\t\t================\n");
	printf("\t\t1、输入学生成绩\n");
	printf("\t\t2、查询学生成绩\n");
	printf("\t\t3、打印输出成绩\n");
	printf("\t\t0、退出系统\n");
	printf("\t\t================\n");
	printf("\t\t 请选择（0-3）：\n");
	scanf("%d",&x);
	switch(x)
	{
	case 1:printf("\n\t\t  请输入学生成绩!");break;
	case 2:printf("\n\t\t  请输入查找学生号!");break;
	case 3:printf("\n\t\t  正在输出!");break;
	case 0:printf("\n\t\t  谢谢使用!");break;
	default:printf("\n\t\t 输入错误?!!");}
	return 0;
}
