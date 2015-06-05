 /*-------------------------------------------------------------------------
  程序L10_11.C : 编写一个函数delgcd(int *x,int *y)，其作用是
   消去两个整型变量的最大公约数。
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
  *x/=n;     /* 消去*x的最大公约数n */
  *y/=n;     /* 消去*y的最大公约数n */
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