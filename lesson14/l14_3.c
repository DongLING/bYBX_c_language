  #include <stdio.h>
  void main()
  {FILE *fp;
   char f_name[30];
   char in_char;
   printf("\n\t请输入要新建的文件名：");
   scanf("%s",f_name);
   fp=fopen(f_name,"w+");
   if(fp!=NULL)
       printf("\n\n\t\t%s 文件已建立。\n",f_name);
   else
       {printf("\n\n\t\t%s 文件无法建立。\n",f_name);
        exit(1);}
   printf("\n\n\t如果键入*，则结束输入。\n");
   in_char=getchar();
   while (in_char!='*')
     {fputc(in_char,fp);
      in_char=getchar();
      }
   fclose(fp);
  }