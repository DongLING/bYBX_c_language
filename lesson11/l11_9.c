 /*---------------------------------------------------------
   ����L11_9.C����дһ��������ѯ����
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
  char *books[6]={"���ñ�ѧC����","������Ļ�����","�ߵ���ѧ","C�������","Linux�����̳�","��������C����"};
  char name[30];
  gets(name);
  search(books,name,6);
 }
