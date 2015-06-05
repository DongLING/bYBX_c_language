 /*--------------------------------------------------- 
  程序L12_9.C功能：输入教师和学生的数据，然后输出。
 ----------------------------------------------------*/
 #include <stdio.h>
 #define N 3
 void main()
 {
  struct  
   { long num;
     char name[20];
     char job;
     union
      { int class;
	char position[10];
       }category;
   }per[N];
  int n,i;
  for(i=0;i<N;i++)
    { printf("Please input number:");
      scanf("%ld",&per[i].num);
      printf("               name:");
      scanf("%s",per[i].name);
      getchar();
      printf("                job:");
      scanf("%c",&per[i].job);
      if (per[i].job=='s')
	 { printf("              class:");
	  scanf("%d",&per[i].category.class);}
      else if (per[i].job=='t')
	    { printf("           position:");
	      scanf("%s",per[i].category.position);}
      }
  printf("\n");
  printf("No.         Name   Job  Class/Position\n");
  for(i=0;i<N;i++)
    if (per[i].job=='s')
       printf("%-10ld%-10s%-5c%-10d\n",per[i].num,per[i].name,per[i].job,
per[i].category. class);
    else
      printf("%-10ld%-10s%-5c%-10s\n",per[i].num, per[i].name,per[i].job,
	  per[i].category.position);
 }
