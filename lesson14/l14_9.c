 /*---------------------------------------------------------
  ����L14_9.C : ��д1���򵥵�ͨѶ¼����ϵͳ��
 -----------------------------------------------------------*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <ctype.h>
 #define N 3
 #define AD struct address_list
 struct  person
 {
  char name[20];
  char address[40];
  long zip;
  char phone[15]; } ;

  AD
 {
  char name[20];
  char address[40];
  long zip;
  char phone[15];
  AD *next; } ;

 FILE *fp;

 AD *load(char filename[])
 { AD *p,*q,*head;
   struct person per;
   head=(AD *)malloc(sizeof(AD));
   q=head=NULL;
   if ((fp=fopen(filename,"rb"))==NULL)
      return head;
   else
    { while (!feof(fp))
       { if(fread(&per,sizeof(struct person),1,fp)==1)
           {p=(AD *)malloc(sizeof(AD));
            strcpy(p->name,per.name);  strcpy(p->address,per.address);
            p->zip=per.zip;     strcpy(p->phone,per.phone);
	    head=p; p->next=q; q=head;
            }
	/* else {printf("�ļ��޷���ȡ���ݡ�"); exit(1);}*/
         }
      fclose(fp);
      return(head);
    }
  }
 /* ����һ��ͨѶ¼����*/
 AD *insert(AD *head)
 { AD *temp,*p;
   p=head;
   temp=(AD *)malloc(sizeof(AD));
   printf("\n\t����������:");       scanf("%s",temp->name);
   printf("\n\t������ͨѶ��ַ:");   scanf("%s",temp->address);
   printf("\n\t������6λ��������:");   scanf("%ld",&temp->zip);
   printf("\n\t������绰����:"); scanf("%s",temp->phone);
   head=temp;
   temp->next=p;
   return head;}

 void save(AD *head,char filename[])
 { AD *p;
   struct person per;
   if ((fp=fopen(filename,"wb"))==NULL)
     {printf("�ļ��޷�д��"); exit(1); }
   else
   {p=head;
    while(p!=NULL)
       { strcpy(per.name,p->name);  strcpy(per.address,p->address);
	 per.zip=p->zip;     strcpy(per.phone,p->phone);
         if(fwrite(&per,sizeof(struct person),1,fp)!=1)
            { printf("�ļ�����д������,�������������.\n");exit(1);}
         p=p->next;
       }
     fclose(fp);
    }
  }

 void show(AD *head)
 { AD *p;
   p=head;
   while(p!=NULL)
       { printf("name:%s\n",p->name);
         printf("address:%s\n",p->address);
	 printf("zip:%ld\t\t",p->zip);
         printf("phone:%s\n\n",p->phone);
         p=p->next;
       }
  }

 void find(AD *head)
 { AD *p;
   char name[20];
   printf("������Ҫ���ҵ��˵�����:");
   scanf("%s",name);
   p=head;
   while(p!=NULL)
       { if (strcmp(name,p->name)==0)
           { printf("name:%s\n",p->name);
             printf("address:%s\n",p->address);
	     printf("zip:%ld\t\t",p->zip);
             printf("phone:%s\n\n",p->phone);
             break;}
         else p=p->next;
       }
    if (p==NULL) printf("\n\t\t���޴���\n\n");
  }

 AD *delete(AD *head)
 { AD *p,*q;
   char name[20];
   printf("������Ҫɾ�����˵�����:");
   scanf("%s",name);
   p=q=head;
   while(p!=NULL)
       { if (strcmp(name,p->name)==0)
            { if (head==p) head=p->next;
              else q->next=p->next;
	      free(p); break;}
         else {q=p; p=p->next;}
       }
    if (p==NULL) printf("\n\t\t���޴���\n\n");
    return head;}

 void main()
 {
  AD *head;
  char fname[20];
  char choise;
  printf("������ͨѶ¼�ļ�����");
  scanf("%s",fname);
  head=load(fname);
  while(1)
  { printf("\t\t     ͨѶ¼����ϵͳ\n");
    printf("\t\t=========================\n");
    printf("\t\t    1.  ����һ����¼\n");
    printf("\t\t    2.  ��ʾ���м�¼\n");
    printf("\t\t    3.  ����������\n");
    printf("\t\t    4.  ������ɾ��\n");
    printf("\t\t    5.  ���̲��˳�\n");
    printf("\n\n\t��ѡ��1~5����");
    getchar();
    scanf("%c",&choise);
    switch(choise)
    {case '1' : head=insert(head);break;
     case '2' : show(head);break;
     case '3' : find(head);break;
     case '4' : head=delete(head);break;
     case '5' : save(head,fname);exit(0);
     default : printf("�����������������!\n");
     }
   }
 }
