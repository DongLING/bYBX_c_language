 /*-----------------------------------------------------------
  程序L12_3.C功能：输出结构体数组各元素的成员值
 ------------------------------------------------------------*/
 #include <stdio.h>
 void main()
 {
  struct  person
    { char name[20];
      char sex;
      int age;
      float height;
    } per[3]={{ "Li Ping",'M',20,175},{"Wang Ling",'F',19,162.5},
{"Zhao Hui",'M',20,178}};
  int i;
  for(i=0;i<3;i++)
     printf("%-18s%3c%4d%7.1f\n",per[i].name,per[i].sex,per[i].age,per[i].height);
}
