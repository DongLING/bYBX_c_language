 /*--------------------------------------
  ����L5_12.C : ����һ���򵥵��ܵ��롣
 ---------------------------------------*/
 #include <stdio.h>
 void main( )
 { char ch;
   do
   { scanf("%c",&ch);
     if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
       { ch=ch+5;
	 if (ch>'Z'&&ch<='Z'+5||ch>'z') ch-=26;
        }
     printf("%c",ch);
   }while (ch!='\n');
  }
