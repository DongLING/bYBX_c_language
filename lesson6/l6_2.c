 /*------------------------------------------------------
  ����L6_2.C���ܣ��βθı䲻Ӱ��ʵ��ʾ����
  ------------------------------------------------------*/
 #include <stdio.h>
 
 void change(int x,int y)
 {
  int t;
  printf ("x=%d,y=%d\n",x,y);
  t=x;  x=y;  y=t;
  printf ("x=%d,y=%d\n",x,y);
 }

 void main()    
 {
  int a=3,b=4;
  printf ("a=%d,b=%d\n",a,b);
  change(a,b);
  printf ("a=%d,b=%d\n",a,b);
 }
