 /*----------------------------------------------------------------
  ����L13_9.C���ܣ��޸���13.5�е�creat()������ʹ������Ľ�����������������������ں��˳��
 ----------------------------------------------------------------*/
 #include <stdio.h>
 #define NULL 0
 struct  node
 { int data;
   struct  node  *next;
   };

 struct  node  *create( )
 { struct  node  *head, *p;
   int x;
   head=NULL;
   printf("Enter a integer: ");
   scanf("%d",&x);
   while(x!=0)
    { p=(struct node *)malloc(sizeof(struct  node));
      p->data=x;
      p->next=head;
      head=p;
      printf("Enter a integer: ");
      scanf("%d",&x);
     }
   return (head);
  }

 void main()
 {
  struct  node  *q;
  q=create();
  printf("The data of link:\n");
  while(q!=NULL)
   { printf("%d\t",q->data);
     q=q->next;
    }
   }