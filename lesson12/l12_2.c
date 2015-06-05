 /*-----------------------------------------------------------
  程序L12_2.C功能：对整个结构体变量进行操作
 -----------------------------------------------------------*/
 #include <stdio.h>
 void main()
 {struct  person
    {char name[20];
     char sex;
     struct  date
       { int year;
         int month;
         int day;
       }birthday;
     float height;
   }per1,per2={"Li Ping",'M',1982,12,15,175.5};
 per1=per2;
 printf("%s%3c%4d/%2d/%d%7.1f\n",per1.name,per1.sex,per1.birthday.month,per1.birthday.day,per1.birthday.year,per1.height);
 }
