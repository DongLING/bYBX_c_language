 /*------------------------------------------------------------
 程序L4_10.C功能：求水仙花数,即这个数等于它的百位、十位和个位数的立方和
  -------------------------------------------------------------*/
 #include <stdio.h>
 void main()         
 {
  int n=100,i,j,k;    /*i、j、k用来放这个数的百位、十位和个位*/
  do 
    {i=n/100;
     j=(n/10)%10;
     k=n%10;
     if (n==i*i*i+j*j*j+k*k*k)
          printf("%d=%d^3+%d^3+%d^3\n",n,i,j,k);
     n=n+1;
     }while (n<=999);
  }
