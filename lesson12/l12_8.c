 /*---------------------------------------------------
  程序L12_8.C功能：统计学生人数，计算平均成绩
 ---------------------------------------------------*/
 #include <stdio.h>
 void main()
 {
   struct  student
     { char name[20];
       char sex;
       int score;
       };
   struct  student  stu[5];
   int i,m_num=0,f_num=0;
   float average,sum=0;
   for(i=0;i<5;i++)
    { printf("Please input name :");
      gets(stu[i].name);
      printf("              sex :");
      scanf("%c",&stu[i].sex);
      printf("             score:");
      scanf("%d",&stu[i].score);
      getchar();
      }
   for(i=0;i<5;i++)
     { if (stu[i].sex=='M'||stu[i].sex=='m')
	     m_num=m_num+1;
       else  f_num=f_num+1;
       sum=sum+stu[i].score;
      }
   average=sum/5;
   printf("m_num=%d, f_num=%d, average=%7.2f\n",m_num,f_num,average);
 }
