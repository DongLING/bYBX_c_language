 /*----------------------------------------------------------------
  ����L13_7.C���ܣ���������ɾ��һ����� 
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
    { p=(struct node *)malloc(sizeof(struct  node));
      p->data=x;
      p->next=NULL;
      if (head==NULL)
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

  struct  node  *delete(struct  node  *head, int value )
  { 
    struct  node  *p, *q;
    p=head;
    if(head==NULL)                 /*�����ǿ�����*/
     { printf("Link is null!\n");      return(head);    }
       while((p->next!=NULL) &&(p->data!=value))   /*Ѱ��ɾ�����λ��*/
          {  q=p;   p=p->next;    }
       if(value==p->data)
           {if(head==p)   head=p->next;         /*ɾ�������һ�����*/
            else  q->next=p->next;     /*ɾ��������*/
            free(p);
           }
    else
       printf("%d node doesn't exist!\n",value);     /*�������޴˽��*/
    return(head);
  }

 void main()
 {
  struct  node  *q;
  int value;
  q=create();
  printf("Enter the delete data: ");
  scanf("%d",&value);
  q=delete(q,value);
  printf("The data of link:\n");
  while(q!=NULL)
   {  printf("%d\t",q->data);
      q=q->next;
   }
  printf("\n"); 
 }
