 /*----------------------------------------
  ����L6_1.C���ܣ����ͼ�Ρ�
 ------------------------------------------*/
 #include <stdio.h>

 void star()
 {printf("******\n");}

 void main()
 {
  int i,j;
  for (i=1;i<=4;i++)
    { for(j=1;j<=2*i-1;j++) printf (" ");
      star();
     }
  for (i=3;i>=1;i--)
    { for(j=1;j<=2*i-1;j++) printf (" ");
      star();
     }
  }
