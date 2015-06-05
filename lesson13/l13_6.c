 /*---------------------------------------------------------------------
  程序L13_6.C功能：从键盘按照小到大顺序输入数据，根据这些数据建立一个链表，
   然后任意输入一个数据，插入链表中并且使得链表仍然保持从小到大的顺序。 
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
   if(head==NULL)                   /*链表是空链表*/
    { head=new;
      new->next=NULL;  
    }
   else
    { while((p->next!=NULL) &&(p->data<value))    /*寻找插入位置*/
	{  q=p;  p=p->next;  }
      if(p->data>=value)
       { if(head==p)              /*链表非空，插入到第一个结点前*/
          { new->next=head;
            head=new;
            }
         else                     /*链表非空，插入到链表中间*/
           {q->next=new;
            new->next=p;
           }
       }
     else                         /*链表非空，插入到链表末尾*/
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