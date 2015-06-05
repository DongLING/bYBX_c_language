 /*-----------------------------------------------------------
 程序L12_5.C功能：共用体变量作为结构体变量的成员
 ------------------------------------------------------------*/
 void main()
 {
  struct  student
    { char *name;
      int dept;
      union  score
         { char grade;
           float point;
         } s;
    }stu[2];
  stu[0].name="Li Ping";
  stu[0].dept=1;
  stu[0].s.grade='B';
  stu[1].name="Zhang Fen";
  stu[1].dept=3;
  stu[1].s.point=82.5;
  printf("%-18s%3d%4c\n",stu[0].name,stu[0].dept,stu[0].s.grade);
  printf("%-18s%3d%7.1f\n",stu[1].name,stu[1].dept,stu[1].s.point);
 }
