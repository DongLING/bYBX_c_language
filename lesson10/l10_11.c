 /*-------------------------------------------------------------------------
  ����L10_11.C : ��дһ������delgcd(int *x,int *y)����������
   ��ȥ�������ͱ��������Լ����
  -------------------------------------------------------------------------*/
 #include <stdio.h>
 void delgcd(int *x,int *y)
 { 
  int m,n,r;
  m=*x;
  n=*y;
  while (1)
    { r=m%n;
      if (r==0) break;
      else
         {m=n;
          n=r;
          }
      }
  *x/=n;     /* ��ȥ*x�����Լ��n */
  *y/=n;     /* ��ȥ*y�����Լ��n */
  }
 void main( )
 {
  int a,b;
  int *p1=&a,*p2=&b;
  printf("Please input Two numbers:");
  scanf("%d%d",&a,&b);
  delgcd(p1,p2);
  printf("result is : a=%d ,b=%d\n",a,b); 
  }