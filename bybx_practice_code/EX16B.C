#include "stdio.h"
int main()
{
  int year,month,date;
  clrscr();
  printf("Please input year&month&date:\n");
  scanf("%d%d%d",&year,&month,&date);
  printf("year=%d,month=%d,date=%d",year,month,date);
  return 0;
}