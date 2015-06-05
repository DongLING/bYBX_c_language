 /*----------------------------------------------------------------
  程序L13_8.C功能：将链表按逆序排列 
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

 struct  node  *reverse(struct  node  *head)
 { struct  node  *p1, *p2, *q;
   p2=head;
   p1=NULL;
   while(p2!=NULL)
   { q=p2->next;
     p2->next=p1;
     p1=p2;
     p2=q;
    }
   head=p1;
   return(head);
  }

 void main()
 {
  struct  node  *q;
  int value;
  q=create();
  q=reverse(q);
  printf("The data of link:\n");
  while(q!=NULL)
   { printf("%d\t",q->data);
     q=q->next;
    }
   }