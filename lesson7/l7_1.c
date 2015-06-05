/*-----------------------------------------------------------------
  程序L7_1.C功能：将数字0~4放入一个整型数组，并逆序输出数组。
 ------------------------------------------------------------------*/  
/*
 * "%s/\r//g" command is used for delete '^M' in a file.
*/

#include <stdio.h>

int main() 
{
	int i;
	int a[5];

	printf("The size of a[5] is: %d bytes.\n", 5*sizeof(int));
	
    /*给数组中元素赋值 */ 
    for (i = 0; i < 5; i++) a[i] = i;
	
    /*逆序输出数组中元素值 */ 
    for (i = 4; i >= 0; i--) printf("%3d", a[i]);

	printf("\n");

	return 0;
}

 
