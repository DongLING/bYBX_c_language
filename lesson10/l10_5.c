 /*-------------------------------------------------
  ����L10 5.C���ܣ���������е�ȫ��Ԫ�� 
 ------------------------------------------------*/
 void main()
 {
  int *p,i;
  int a[5]={1,2,3,4,5};
  p=a;
  printf("\n");
  for (;p<a+5;p++)
    printf("%d\t",*p);
 }
