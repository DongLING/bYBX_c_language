 /*-----------------------------------------------
  程序L11_2.C功能：求两个数中较大的数。
 ------------------------------------------------*/
 #include <stdio.h>
 int max(int x,int y)
 {
   int z;
   if (x>y)   z=x;
   else    z=y;
   return z;
 }
 void main()
 {
  int a,b,c;
  int (*p)( );       /* 定义指向函数的指针变量p ，该函数的返回值是整型*/
  p=max;         /* 令指针变量p指向函数max() */
  scanf("%d,%d",&a,&b);
  c=(*p)(a,b);      /* 等价于c=max(a,b); */
  printf("%d,%d,max is %d\n",a,b,c);
 }

