 /*---------------------------------------------------------
   程序L11_9.C：编写一个书名查询函数
   void search(int *bk_list[],char *bk_name,int n)
 -----------------------------------------------------------*/
 #include <stdio.h>
 #include <string.h>
 int string_in(char *str1,char *str2)
 {
  int m=0;
  char *p,*q;
  for (;*str1!='\0';str1++)
     if (*str1==*str2)
	{ for(p=str1,q=str2;*q!='\0';p++,q++)
	     if (*p!=*q) break;
	  if (*q=='\0')
	     {m=1;break;}
	  }
  return m;
  }
 void search(char *bk_list[],char *bk_name,int n)
 {
  int i;
  for(i=0;i<n;i++)
     if (string_in(bk_list[i],bk_name))
          printf("%s\n",bk_list[i]);
 }
 void main()
 {
  char *books[6]={"边用边学C语言","计算机文化基础","高等数学","C程序设计","Linux基础教程","精讲多练C语言"};
  char name[30];
  gets(name);
  search(books,name,6);
 }
