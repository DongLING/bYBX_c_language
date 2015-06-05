 /*------------------------------------------------------------------------
 程序L14_7.C功能：将10个学生记录输入文件d:\stu2中,然后从文件中读取显示。
 ------------------------------------------------------------------------*/
  #include <stdio.h>
  #define ST struct student
  #define N 3
  ST
  {char class[6];
   long num;
   char name[20];
   int math,eng,comp;
   }a[N],stu;
  
  void main()
  {int i;
   FILE *fp;
   fp=fopen("d:\\stu2","wb");
   if(fp==NULL)
    { printf("\n\n\t\t 文件无法建立。\n");
      exit(1);}
   for(i=0;i<N;i++)
    {printf("\n\t请输入学生所在班级:");   scanf("%s",a[i].class);
     printf("\n\t请输入学生学号:");       scanf("%ld",&a[i].num);
     printf("\n\t请输入学生姓名:");       scanf("%s",a[i].name);
     printf("\n\t请输入学生数学成绩:");   scanf("%d",&a[i].math);
     printf("\n\t请输入学生英语成绩:");   scanf("%d",&a[i].eng);
     printf("\n\t请输入学生计算机成绩:"); scanf("%d",&a[i].comp);
    }
   if(fwrite(a,sizeof(ST),N,fp)!=N)
       { printf("文件不能写入数据,请检查后重新运行.\n");exit(1);}
   fclose(fp);

   fp=fopen("d:\\stu2","rb");
   if (fp!=NULL)
     {printf("\n\t  班级       学号      姓名  数学  英语   计算机 \n");
      for(i=0;i<N;i++)
	{ if(fread(&stu,sizeof(ST),1,fp)==1)
             printf("\t%6s%10ld%9s%5d%6d%8d\n",
                   stu.class,stu.num,stu.name,stu.math,stu.eng,stu.comp);
	  else
            {printf("文件不能读取数据,请检查后重新运行.\n");
             exit(1);}
	 }
      }
   else
     {printf(" 文件无法打开 \n");
      exit(1); }
   fclose(fp);
   }