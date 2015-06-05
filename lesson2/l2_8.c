/*-----------------------------------------------------------------
   程序L2_8.C : 编写一个程序，用于输入一个学生的姓名、学号、英语、
   数学、计算机成绩，输出学生姓名、学号和平均成绩。
---------------------------------------------------------------*/
#include <stdio.h>

int main( )
{
    char name[31];      /*数组name[31]最多可以放30个字符或15个汉字*/
    long num;           /*其值超过32767的号码，需要用长整型*/
    int eng,math,comp;
    float aver;
    printf("Please input the student's name:");
    scanf("%s",name);
/*字符串用格式符"%s"，并且数组名name前不需要取址符"&"*/
    printf("Please input the student's ID:");
    scanf("%ld",&num);       /*long型变量的格式符用%ld*/
    printf("Please input scores (English,math,computer):");
    scanf("%d,%d,%d",&eng,&math,&comp);
    aver=(eng+math+comp)/3.0;
    printf("the student's name is %s , his ID is %ld ,his average score is %.1f \n",name,num,aver);
    return 0;
  }

