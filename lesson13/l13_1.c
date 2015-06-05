 /*-------------------------------------------------
  程序L13_1.C功能：用三种形式对结构体变量成员进行引用
 --------------------------------------------------*/
 #include <stdio.h>
 void main()
 {
  struct  person
   { char name[20];
     char sex;
     int age;
     float height;
   } per , *p;
  p=&per;
  printf("Enter the name: ");
  gets(per. name);
  per.sex= 'M ';
  per.age=20;
  per.height=(175+176)/2;
  printf("%s%3c%4d%7.1f\n",per.name, per.sex, per.age, per.height);
  printf("%s%3c%4d%7.1f\n",(*p).name, (*p).sex, (*p).age, (*p).height);
  printf("%s%3c%4d%7.1f\n",p->name, p->sex, p->age, p->height);
 }
