 /*-----------------------------------------------------------------------
 程序L8_10.C功能：输入英文月份单词，输出该单词代表的对应月的数字表现形式。
 -----------------------------------------------------------------------*/
 #include <stdio.h>
 #include <string.h>
 /*查找字符串name是否在含有m个字符串的数组list中，如果存在返回值是它在数组中的下标，否则返回值为m*/
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
    printf("%s 表示 %d月 \n",month,n+1);
  else printf("查无此单词\n");
  }
