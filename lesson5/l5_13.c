 /*----------------------------------------------------------------
  程序L5_13.C : 输入两个正整数m和n，求它们的最大公约数。
 -----------------------------------------------------------------*/
 #include <stdio.h>
 void main( )                               
 { 
  int m,n,r;
  printf("Please input Two numbers:");
  scanf("%d%d",&m,&n);
  while (1)
   { r=m%n;
     if (r==0) break;
     else 
        {m=n;
         n=r;
         }
     }
  printf("%d is the greastest common divisor \n",n); 
   }              
