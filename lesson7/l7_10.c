  /*---------------------------------------------------
  程序L7_10.C功能：用选择法对10个整数排序。
  ------------------------------------------------------*/
 #include <stdio.h>
 void sort(int array[ ],int n)
 {
  int i,j,k,t;
  for (i=0;i<n-1;i++)               /*进行n-1轮选择最小数的操作*/
    { k=i;                       /*k用来存放第i轮最小数的下标*/
      for (j=i+1;j<n;j++)
          if (array[j]<array[k]) k=j;
      t=array[k];array[k]=array[i];array[i]=t;  /*最小数a[k]与a[i]互换*/
     }
  }

 void main()      
 {
  int a[10],i;
  for (i=0;i<10;i++)
    scanf ("%d",&a[i]);
  sort(a,10);
  for (i=0;i<10;i++)
    printf("%4d",a[i]);
  printf("\n");
 }
