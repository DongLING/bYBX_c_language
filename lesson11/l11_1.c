 /*-------------------------------------------------------------
  程序L11_1.C功能：求两个数中较大的数。
 ------------------------------------------------------------*/
 #include <stdio.h>
 int *max(int *x , int *y)  /* 函数名前面的*表示函数的返回值是一个地址 */
 {
    int *q;               /* 定义指针q用于存放最大数的地址 */
    if (*x>*y)   q=x;
    else    q=y;
    return q;
 }
 void main()
 {
   int a,b,*p;
   scanf("%d,%d",&a,&b);
   p=max(&a,&b);
   printf("%d,%d,max is %d\n",a,b,*p);
 }
