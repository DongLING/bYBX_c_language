 /*-------------------------------------------------
  程序L13_3.C功能：结构体变量作函数参数 
 --------------------------------------------------*/
 #include <stdio.h>
 #include <string.h>
 struct  person
   { char name[20];
     char sex;
     int age;
     float height;
   };
 void output(struct  person  p)
 { printf("%s%3c%4d%7.1f",p.name, p.sex, p.age, p.height);
   printf("\n");
  }
 void main()
 { struct  person  per;
   strcpy(per.name, "Li Ping");
   per.sex= 'M ';
   per.age=20;
   per.height=175.5;
   output(per);
 }
