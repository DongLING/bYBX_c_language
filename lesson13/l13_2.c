 /*-------------------------------------------------
  程序L13_2.C功能：使用指向结构体数组的指针变量。
 --------------------------------------------------*/
 #include <stdio.h>
 void main()
 { struct  person
      { char name[20];
        char sex;
        int age;
        float height;
        }per[3]={{ "Li Ping", 'M ',20,175},
                 {"Wang Ling", 'F ',19,162.5},
                 {"Zhao Hui", 'M ',20,178}};
   struct  person  *p;
   for (p=per;p<per+3;p++)
      printf("%-18s%3c%4d%7.1f\n",p->name,p->sex,p->age,p->height);
  }
