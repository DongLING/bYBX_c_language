 /*------------------------------------------------------------------------
 ����L14_7.C���ܣ���10��ѧ����¼�����ļ�d:\stu2��,Ȼ����ļ��ж�ȡ��ʾ��
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
    { printf("\n\n\t\t �ļ��޷�������\n");
      exit(1);}
   for(i=0;i<N;i++)
    {printf("\n\t������ѧ�����ڰ༶:");   scanf("%s",a[i].class);
     printf("\n\t������ѧ��ѧ��:");       scanf("%ld",&a[i].num);
     printf("\n\t������ѧ������:");       scanf("%s",a[i].name);
     printf("\n\t������ѧ����ѧ�ɼ�:");   scanf("%d",&a[i].math);
     printf("\n\t������ѧ��Ӣ��ɼ�:");   scanf("%d",&a[i].eng);
     printf("\n\t������ѧ��������ɼ�:"); scanf("%d",&a[i].comp);
    }
   if(fwrite(a,sizeof(ST),N,fp)!=N)
       { printf("�ļ�����д������,�������������.\n");exit(1);}
   fclose(fp);

   fp=fopen("d:\\stu2","rb");
   if (fp!=NULL)
     {printf("\n\t  �༶       ѧ��      ����  ��ѧ  Ӣ��   ����� \n");
      for(i=0;i<N;i++)
	{ if(fread(&stu,sizeof(ST),1,fp)==1)
             printf("\t%6s%10ld%9s%5d%6d%8d\n",
                   stu.class,stu.num,stu.name,stu.math,stu.eng,stu.comp);
	  else
            {printf("�ļ����ܶ�ȡ����,�������������.\n");
             exit(1);}
	 }
      }
   else
     {printf(" �ļ��޷��� \n");
      exit(1); }
   fclose(fp);
   }