  #include <stdio.h>
  void main()
  {FILE *fp;
   char f_name[30];
   char in_char;
   printf("\n\t������Ҫ�½����ļ�����");
   scanf("%s",f_name);
   fp=fopen(f_name,"w+");
   if(fp!=NULL)
       printf("\n\n\t\t%s �ļ��ѽ�����\n",f_name);
   else
       {printf("\n\n\t\t%s �ļ��޷�������\n",f_name);
        exit(1);}
   printf("\n\n\t�������*����������롣\n");
   in_char=getchar();
   while (in_char!='*')
     {fputc(in_char,fp);
      in_char=getchar();
      }
   fclose(fp);
  }