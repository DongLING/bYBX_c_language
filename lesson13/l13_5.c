 /*----------------------------------------------------------------
  ����L13_5.C���ܣ�����һ�������������������Ϊ0ʱ�������������
 -----------------------------------------------------------------*/
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
      if (head==NULL)
        head=tail=p;
      else
	{  tail->next=p;
           tail=p;
        }
      printf("Enter a integer: ");
      scanf("%d",&x);
    }
  return (head);
 }

 void main()
 { struct  node  *q;
   q=create();
   printf("The data of link:\n");
   while(q!=NULL)
    { printf("%d\t",q->data);
      q=q->next;
    }
   printf("\n");
  }