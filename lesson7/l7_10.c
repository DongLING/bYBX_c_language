  /*---------------------------------------------------
  ����L7_10.C���ܣ���ѡ�񷨶�10����������
  ------------------------------------------------------*/
 #include <stdio.h>
 void sort(int array[ ],int n)
 {
  int i,j,k,t;
  for (i=0;i<n-1;i++)               /*����n-1��ѡ����С���Ĳ���*/
    { k=i;                       /*k������ŵ�i����С�����±�*/
      for (j=i+1;j<n;j++)
          if (array[j]<array[k]) k=j;
      t=array[k];array[k]=array[i];array[i]=t;  /*��С��a[k]��a[i]����*/
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
