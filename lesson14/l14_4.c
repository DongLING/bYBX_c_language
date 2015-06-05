  #include <stdio.h>
  void main()
  {FILE *fp;
   char out_ch,f_name[30];
   printf("\n\t请输入要打开的文件名：");
   scanf("%s",f_name);
   fp=fopen(f_name,"r");
   if (fp!=NULL)
     {while(out_ch=fgetc(fp)!=EOF)
      putchar(out_ch);
      }
   else 
   printf("\n\n\t\t%s 文件不存在。\n",f_name);
   fclose(fp);
   }
