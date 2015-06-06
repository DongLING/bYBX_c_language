#include <stdio.h>
int sum(int *q,int n)
{int i,s=0;
 int *t;
 t=q;         /*t与q都指向数组a的第一个元素*/
 for (i=0;i<n;i++,q++)
     s+=*q;
 *(t+10)=s;  /*t+10指向数组元素a[10]*/
 return 0;
}

int main()
{int num,a[11]={1,2,3,4,5,6,7,8,9,10};
 int *p=a;
 scanf("%d",&num);
 sum(p,num);
 printf("%d\n",a[10]);
 return 0;
}