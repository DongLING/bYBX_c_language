#include <stdio.h>
int main()
{char name[31],name1[31];
 long num,num1;
 float eng,math,comp,eng1,math1,comp1;
 float aver,aver1;
 printf("Please input first student's name:");
 scanf("%s",&name);
 printf("Please input his student's ID:");
 scanf("%ld",&num);
 printf("Please input his scores (English,Math,Computer):");
 scanf("%f,%f,%f",&eng,&math,&comp);
 aver=(eng+math+comp)/3.0;
 printf("Please input second student's name:");
 scanf("%s",&name1);
 printf("Please input her student's ID:");
 scanf("%ld",&num1);
 printf("Please input her scores (English,Math,Computer):");
 scanf("%f,%f,%f",&eng1,&math1,&comp1);
 aver1=(eng1+math1+comp1)/3.0;
 printf("First  student's name is:%s,his ID is:%ld,his averge score is:%5.2lf\n",name,num,aver);
 printf("Second student's name is:%s,her ID is:%ld,her averge score is:%5.2lf",name1,num1,aver1);
 return 0;
}
