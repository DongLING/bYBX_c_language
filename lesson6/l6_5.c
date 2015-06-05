 /*------------------------------------------------------
   程序L6_5.C : 输入两个数，求它们的和、差、积、商。
 ------------------------------------------------------*/
 #include <stdio.h>
 void main()
 {
 float x,y;
 float add(float,float),min(float,float),mul(float,float),div(float,float);
 printf("Please input two numbers:");
 scanf("%f,%f",&x,&y);
 printf("%f+%f=%f\n",x,y,add(x,y));
 printf("%f-%f=%f\n",x,y,min(x,y));
 printf("%f*%f=%f\n",x,y,mul(x,y));
 printf("%f/%f=%f\n",x,y,div(x,y));
 }

 float add(float xx,float yy)
 {
  float zz;
  zz=xx+yy;
  return(zz);
  }

 float min(float xx, float yy)
 {
  float zz;
  zz=xx-yy;
  return(zz);
  }

 float mul(float xx, float yy)
 {
  float zz;
  zz=xx*yy;
  return(zz);
  }

 float div(float xx, float yy)
 {
  float zz;
  zz=xx/yy;
  return(zz);
  }
