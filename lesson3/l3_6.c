 /*----------------------------------------------------------
   程序L3_6.C功能：由键盘输入一个成绩，然后输出相应的等级
        "优"、"良"、"中"、"及格"、"不及格"。
  -----------------------------------------------------------*/
 #include <stdio.h>
 void main()                 
 {
  int score;
  printf("请输入学生分数：");
  scanf ("%d",&score);
  switch (score/10)
  { case 10:
    case 9: printf("成绩优秀\n"); break;
    case 8: printf("成绩良好\n"); break;
    case 7: printf("成绩中等n"); break;
    case 6: printf("成绩及格\n"); break;
    case 5:  
    case 4:  
    case 3:  
    case 2:  
    case 1:  
    case 0: printf("成绩不及格\n"); break;
    default : printf("输入分数错误\n");
   }
  }
