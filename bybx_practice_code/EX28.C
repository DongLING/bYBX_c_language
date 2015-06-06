#include <stdio.h>
int main()
{char name[31];
 long num;
 float eng,math,comp;
 float aver;
 printf("Please input a student's name:");
 scanf("%s",&name);
 printf("Please input the student's ID:");
 scanf("%ld",&num);
 printf("Please input scores (English,Math,Computer):");
 scanf("%f,%f,%f",&eng,&math,&comp);
 aver=(eng+math+comp)/3.0;
 printf("The student's name is:%s,his ID is:%ld,his averge score is:%5.2lf",name,num,aver);
 return 0;
}
