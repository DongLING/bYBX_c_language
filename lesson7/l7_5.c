/*---------------------------------------------------------------------------------
 ����L7_5.C ��������������������������
 -----------------------------------------------------------------------------------*/
 #include <stdio.h>        
 float max(float x, float y)   
 {float z;                 
  if (x>y) z=x;            
  else z=y;               
  return z;                
  }
 void main( )                    
 {float a[2],c;                   
  printf("Please input two numbers:");  
  scanf("%f,%f",&a[0],&a[1]);        
  c=max(a[0],a[1]);                      
  printf("%f,%f,the max is %f\n",a[0],a[1],c); 
 }
