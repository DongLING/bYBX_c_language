 /*-----------------------------------------------------------------------
  ����L14_6.C���ܣ���10��ѧ����¼�����ļ�d:\stu1.txt�У�������ʾ����Ļ�ϡ�
 ----------------------------------------------------------------------*/
  #include <stdio.h>
  #define N 3
  void main()
  {
   FILE *fp;
   long num;
   int n,score;
   char name[20];
   fp=fopen("d:\\stu1.txt","w");
   if(fp==NULL)
     { printf("\t\t �ļ��޷�������\n");
       exit(1);}
   else
     for(n=1;n<=N;n++)
       { scanf("%s%10ld%d",name,&num,&score);
	 fprintf(fp,"%20s%10ld%5d\n",name,num,score);
        }
   fclose(fp);
   fp=fopen("d:\\stu1.txt","r");
   if(fp==NULL)
     { printf("\t\t �ļ��޷��򿪡�\n");
       exit(1);}
   else
   for(n=1;n<=N;n++)
     { fscanf(fp,"%20s%10ld%d\n",name,&num,&score);
       printf("%20s%10ld%5d\n",name,num,score);
      }
   fclose(fp);
  }
