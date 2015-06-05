 /*-----------------------------------------------------------------------
   程序L14_5.C功能：将文件d:\data1.txt中的内容复制到d:\data2.txt中。
 ------------------------------------------------------------------------*/
 #include <stdio.h>
 void main()
 { FILE *f_in,*f_out;
   char str[50];
   int i;
   f_out=fopen("d:\\data1.txt","r");
   f_in=fopen("d:\\data2.txt","w");
   if(f_in==NULL||f_out==NULL)
     { printf("\t\t 文件无法打开或建立。\n");
       exit(1);}
   else
      while(!feof(f_out))
	{ fgets(str,30,f_out);
	  fputs(str,f_in);
	 }
   fclose(f_out);
   fclose(f_in);
  }
