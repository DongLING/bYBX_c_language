 /*----------------------------------------------------------------------
  ����L14_8.C : ��дһ��������Խ������ļ����ӵ�һ���ļ�֮��
 ----------------------------------------------------------------------*/
 #include <stdio.h>

 void  file_join(FILE *f_in,FILE *f_out)
 {
  char c;
  c=fgetc(f_out);
  while (!feof(f_out))
       { fputc(c,f_in);
	 c=fgetc(f_out);}
 }

 void main(int argc , char *argv[ ])
 {
  FILE  *fp1 , *fp2;
  if (argc<3)
    {printf("�밴�ո�ʽ���룺f_join  filename1  filename2");
     exit(0);}
  else
    {argv++;
     fp1=fopen(*argv, "ab");
     while(argc>=3)
     { argv++;
       fp2=fopen(*argv,"rb");
       file_join(fp1,fp2);
       argc--;
       fclose(fp2);
      }
     fclose(fp1);
   }
 }
