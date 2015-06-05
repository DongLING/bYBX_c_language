 /*-------------------------------------------------
  程序L13_4.C功能：指向结构体变量的指针作函数参数 
 --------------------------------------------------*/
 #include <stdio.h>
 struct  person
  { char name[20];
    char sex;
    int age;
    float height;
   };
 void output(struct  person  *p)
 { printf("%-18s%3c%4d%7.1f", p->name, p->sex, p->age, p->height);
   printf("\n");
 }
 void main()
 { struct person *ptr, per[3]={{"Li Ping", 'M ',20,175},
                               {"Wang Ling", 'F ',19,162.5},
                               {"Zhao Hui", 'M ',20,178}};
  ptr=per;
  for(;ptr<per+3;ptr++) 
      output(ptr);
 }

