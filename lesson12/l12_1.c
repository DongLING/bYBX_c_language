 /*----------------------------------------------------------------
  ����L12_1.C���ܣ��Խṹ�������Ա���в���
 ----------------------------------------------------------------*/
 #include <stdio.h>
 void main()
 {struct  person
   { char name[20];
     char sex;
     struct  date
        { int year;
          int month;
          int day;
        }birthday;
     float height;
   } per;
 printf("Enter the name: ");
 gets(per.name);
 per.sex='M';
 per.birthday.year=1982;
 per.birthday.year++;
 per.birthday.month=12;
 per.birthday.day=15;
 per.height=(175+176)/2.0;
 printf("%s%3c%4d/%2d/%d%7.1f\n",per.name,per.sex,per.birthday.month,per.birthday.day,per.birthday.year,per.height);
 }
