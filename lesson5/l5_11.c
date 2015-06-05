 /*---------------------------------------------------------
  程序L5_11.C功能：输入年、月、日，输出该日期是该年的第几天
  ---------------------------------------------------------*/
 #include <stdio.h>
	
 /*函数is_leap_year()判断年year是否是闰年，如果是返回值为1，否则为0*/
 int is_leap_year(int year)
 { int leap; 
   if (year%4==0&&year%100!=0||year%400==0)  leap=1;
   else leap=0;
   return  leap;}

 /*函数len_of_month()的返回值为某年year的某月month的天数*/
 int len_of_month(int year,int month)
 { int month_days;
   if (month==2)
      if (is_leap_year(year)) month_days=29;
      else month_days=28;
   else  if (month==4||month==6||month==9||month==11)  month_days=30;
	 else  month_days=31;
   return  month_days;}

 /*函数len_of_days()的返回值为该日期date是该年year的第几天*/
 int len_of_days(int year,int month,int date)
 { int total_days,n;
   for(n=1,total_days=0;n<month;n++)
       total_days+=len_of_month(year,n);
   total_days+=date;
   return total_days;}

 void main()
 { int year,month,date,days,n;
   printf("please input year,month,date:");
   scanf("%d,%d,%d",&year,&month,&date);
   days=len_of_days(year,month,date);
   printf("%d/%d/%d is the %d in %d\n",year,month,date,days,year);
  }

