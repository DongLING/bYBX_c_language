  #include <stdio.h>
  void main()
  {FILE *fp;
   char f_name[30];
   char choise;
   printf("\n\t������Ҫ�½����ļ�����");
   scanf("%s",f_name);
   fp=fopen(f_name,"r");
   if (fp!=NULL)
     {printf("\n\n\t\t���ļ��Ѵ��ڣ��Ƿ�Ҫ����?(y/n) ");
      getchar();
      scanf("%c",&choise);
      if(choise=='n'||choise=='N')
        exit(1);
      }
   fclose(fp);
   fp=fopen(f_name,"w+");
   if(fp!=NULL)
       printf("\n\n\t\t%s �ļ��ѽ�����\n",f_name);
   else
       {printf("\n\n\t\t%s �ļ��޷�������\n",f_name);
        exit(1);}
   fclose(fp);
  }