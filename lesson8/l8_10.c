 /*-----------------------------------------------------------------------
 ����L8_10.C���ܣ�����Ӣ���·ݵ��ʣ�����õ��ʴ���Ķ�Ӧ�µ����ֱ�����ʽ��
 -----------------------------------------------------------------------*/
 #include <stdio.h>
 #include <string.h>
 /*�����ַ���name�Ƿ��ں���m���ַ���������list�У�������ڷ���ֵ�����������е��±꣬���򷵻�ֵΪm*/
 int search(char list[][20],char name[],int m)
 {
  int i;
  for(i=0;i<m;i++)
    if(strcmp(list[i],name)==0) break;
  return i;}

 void main()
 {
  char month_list[12][20]= {"January", "February", "March", "April", "May","June","July","August","September","October","November","December"};
  char month[20];
  int n;
  gets(month);
  n=search(month_list,month,12);
  if (n<12)
    printf("%s ��ʾ %d�� \n",month,n+1);
  else printf("���޴˵���\n");
  }
