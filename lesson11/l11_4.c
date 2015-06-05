 /*-----------------------------------------------
 程序L11_4.C功能：将多个字符串按字母顺序输出。
 --------------------------------------------*/
 #include <stdio.h>
 #include <string.h>
 void sort(char *str[] , int n)
 {
  char *temp;
  int  i, j , k;
  for (i=0;i<n-1;i++)
  { k=i;
    for (j=i+1;j<n;j++)
       if (strcmp(str[k],str[j])>0)
           k=j;
    if (k!= i)
       { temp=str[i];
         str[i]=str[k];
         str[k]=temp;  
        }
   }
  }
 void main()
 {
  char *string[4]={"FORTRAN","PASCAL","BASIC","C"}; 
  /* 指针数组string包含4个字符串的首地址 */
  int  i , n=4;
  sort(string , n);
  for (i=0;i<n;i++)
  printf("%s\n" , string[i]);  /*string[i]表示指针数组中第i个字符串的首地址*/
  }

