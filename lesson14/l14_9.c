 /*---------------------------------------------------------
  程序L14_9.C : 编写1个简单的通讯录管理系统。
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
	/* else {printf("文件无法读取数据。"); exit(1);}*/
         }
      fclose(fp);
      return(head);
    }
  }
 /* 输入一条通讯录内容*/
 AD *insert(AD *head)
 { AD *temp,*p;
   p=head;
   temp=(AD *)malloc(sizeof(AD));
   printf("\n\t请输入姓名:");       scanf("%s",temp->name);
   printf("\n\t请输入通讯地址:");   scanf("%s",temp->address);
   printf("\n\t请输入6位邮政编码:");   scanf("%ld",&temp->zip);
   printf("\n\t请输入电话号码:"); scanf("%s",temp->phone);
   head=temp;
   temp->next=p;
   return head;}

 void save(AD *head,char filename[])
 { AD *p;
   struct person per;
   if ((fp=fopen(filename,"wb"))==NULL)
     {printf("文件无法写入"); exit(1); }
   else
   {p=head;
    while(p!=NULL)
       { strcpy(per.name,p->name);  strcpy(per.address,p->address);
	 per.zip=p->zip;     strcpy(per.phone,p->phone);
         if(fwrite(&per,sizeof(struct person),1,fp)!=1)
            { printf("文件不能写入数据,请检查后重新运行.\n");exit(1);}
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
   printf("请输入要查找的人的姓名:");
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
    if (p==NULL) printf("\n\t\t查无此人\n\n");
  }

 AD *delete(AD *head)
 { AD *p,*q;
   char name[20];
   printf("请输入要删除的人的姓名:");
   scanf("%s",name);
   p=q=head;
   while(p!=NULL)
       { if (strcmp(name,p->name)==0)
            { if (head==p) head=p->next;
              else q->next=p->next;
	      free(p); break;}
         else {q=p; p=p->next;}
       }
    if (p==NULL) printf("\n\t\t查无此人\n\n");
    return head;}

 void main()
 {
  AD *head;
  char fname[20];
  char choise;
  printf("请输入通讯录文件名：");
  scanf("%s",fname);
  head=load(fname);
  while(1)
  { printf("\t\t     通讯录管理系统\n");
    printf("\t\t=========================\n");
    printf("\t\t    1.  插入一条记录\n");
    printf("\t\t    2.  显示所有记录\n");
    printf("\t\t    3.  按姓名查找\n");
    printf("\t\t    4.  按姓名删除\n");
    printf("\t\t    5.  存盘并退出\n");
    printf("\n\n\t请选择（1~5）：");
    getchar();
    scanf("%c",&choise);
    switch(choise)
    {case '1' : head=insert(head);break;
     case '2' : show(head);break;
     case '3' : find(head);break;
     case '4' : head=delete(head);break;
     case '5' : save(head,fname);exit(0);
     default : printf("输入错误，请重新输入!\n");
     }
   }
 }
