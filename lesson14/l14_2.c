  #include <stdio.h>
  void main()
  {FILE *fp;
   char f_name[30];
   char choise;
   printf("\n\t请输入要新建的文件名：");
   scanf("%s",f_name);
   fp=fopen(f_name,"r");
   if (fp!=NULL)
     {printf("\n\n\t\t该文件已存在，是否要覆盖?(y/n) ");
      getchar();
      scanf("%c",&choise);
      if(choise=='n'||choise=='N')
        exit(1);
      }
   fclose(fp);
   fp=fopen(f_name,"w+");
   if(fp!=NULL)
       printf("\n\n\t\t%s 文件已建立。\n",f_name);
   else
       {printf("\n\n\t\t%s 文件无法建立。\n",f_name);
        exit(1);}
   fclose(fp);
  }