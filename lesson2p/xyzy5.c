/*-----------------------------------------------------------------
   程序L2_8.C : 编写一个程序，用于输入一个学生的姓名、学号、英语、
   数学、计算机成绩，输出学生姓名、学号和平均成绩。
---------------------------------------------------------------*/
#include <stdio.h>

int main( )
{
    char name1[31],name2[31];      /*数组name[31]最多可以放30个字符或15个汉字*/
    long num1,num2;           /*其值超过32767的号码，需要用长整型*/
    int eng1,math1,comp1,eng2,math2,comp2;
    float aver1,aver2;
    printf("Please input the 1st student's name:");
    scanf("%s",name1);
/*字符串用格式符"%s"，并且数组名name前不需要取址符"&"*/
    printf("Please input the 1st student's ID:");
    scanf("%ld",&num1);       /*long型变量的格式符用%ld*/
    printf("Please input the 1st student's scores (English1,math1,computer1):");
    scanf("%d,%d,%d",&eng1,&math1,&comp1);
    aver1=(eng1+math1+comp1)/3.0;
    printf("the 1st student's name is %s , his ID is %ld ,his average score is %.1f \n",name1,num1,aver1);

    printf("Please input the 2nd student's name:");
    scanf("%s",name2);
/*字符串用格式符"%s"，并且数组名name前不需要取址符"&"*/
    printf("Please input the 2nd student's ID:");
    scanf("%ld",&num2);       /*long型变量的格式符用%ld*/
    printf("Please input the 2nd student's scores (English,math,computer):");
    scanf("%d,%d,%d",&eng2,&math2,&comp2);
    aver2=(eng2+math2+comp2)/3.0;
    printf("the 2nd student's name is %s , his ID is %ld ,his average score is %.1f \n",name2,num2,aver2);
    return 0;
  }

