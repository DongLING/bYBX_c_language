 /*----------------------------------------------------------
  程序L7_2.C功能：输入10个整数，输出最大数。
  ----------------------------------------------------------*/
 #include <stdio.h>
 void main()    
 {
  int i,array[10],big;
  /*给数组中所有元素赋值  */
  for(i=0;i<10;i++) 
     scanf("%d",&array[i]);
  /*找出数组中最大的元素 */
  big=array[0];
  for(i=0;i<10;i++) 
        if(array[i]>big) big=array[i];
  printf ("The biggest is %3d\n",big);
 }

