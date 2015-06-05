  #include <stdio.h>
  void main()
  {FILE *fp;
   char in_char;
   fp=fopen("d:\\ljz.txt","w");
   in_char=getchar();
   while (in_char!='*')
     {fputc(in_char,fp);
      in_char=getchar();
      }
   fclose(fp);
   fp=fopen("d:\\ljz.txt","w");
   fseek(fp,5L,0);
   putchar(fgetc(fp));
   fseek(fp,-5L,1);
   putchar(fgetc(fp));
   fseek(fp,5L,1);
   putchar(fgetc(fp));
   fseek(fp,5L,2);
   putchar(fgetc(fp));
   fseek(fp,-5L,2);
   putchar(fgetc(fp));
   fclose(fp);
  }