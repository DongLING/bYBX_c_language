 /*---------------------------------------------------------------------
  ����L13_6.C���ܣ��Ӽ��̰���С����˳���������ݣ�������Щ���ݽ���һ������
   Ȼ����������һ�����ݣ����������в���ʹ��������Ȼ���ִ�С�����˳�� 
 ----------------------------------------------------------------*/
 #include <stdio.h>
 #define NULL 0
 struct  node
 { int data;
   struct  node  *next;
   };

 struct  node  *create( )
 { struct  node  *head, *tail, *p;
   int x;
   head=tail=NULL;
   printf("Enter a integer: ");
   scanf("%d",&x);
   while(x!=0)
    { p=(struct  node *)malloc(sizeof(struct  node));
      p->data=x;
      p->next=NULL;
      if (head== NULL)
         head=tail=p;
      else
	{ tail->next=p;
          tail=p;
        }
      printf("Enter a integer: ");
      scanf("%d",&x);
     }
   return (head);
  }

 struct  node  *insert(struct  node  *head, int value )
 {
   struct  node  *new, *p, *q;
   new=(struct  node *)malloc(sizeof(struct  node));
   new->data=value;
   p=head;
   if(head==NULL)                   /*�����ǿ�����*/
    { head=new;
      new->next=NULL;  
    }
   else
    { while((p->next!=NULL) &&(p->data<value))    /*Ѱ�Ҳ���λ��*/
	{  q=p;  p=p->next;  }
      if(p->data>=value)
       { if(head==p)              /*����ǿգ����뵽��һ�����ǰ*/
          { new->next=head;
            head=new;
            }
         else                     /*����ǿգ����뵽�����м�*/
           {q->next=new;
            new->next=p;
           }
       }
     else                         /*����ǿգ����뵽����ĩβ*/
       { p->next=new;
         new->next=NULL;
       }
    }
  return(head);
 }

 void main()
 {
  struct  node  *q;
  int value;
  q=create();
  printf("Enter the insert data: ");
  scanf("%d",&value);
  q=insert(q,value);
  printf("The data of link:\n");
  while(q!=NULL)
  {  printf("%d\t",q->data);
     q=q->next;
   }
  printf("\n"); 
 }
