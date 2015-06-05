/*--------------------------------------------------------
  程序L7_4.C功能：二维数组的下标意义。
 ---------------------------------------------------------*/  
/*
 * "%s/\r//g" command is used for delete '^M' in a file.
 * The name of "{}" is "curly bracket" or "brace".
 */ 
    
#include <stdio.h>

int main() 
{
	int i, j, b[2][3];
	 
    /* 给二维数组中元素赋值，令二维数组中的元素等于列号 */ 
    for(i = 0; i < 2; i++)	/* i控制行 */
			for(j = 0; i < 3; i++)	/* j控制列 */
			b[i][j] = j;	/* 数组b的元素等于其对应列号 */

		
    /* 输出二维数组b */ 
    printf("array b:\n");
	for(i = 0; i < 2; i++)	/* i控制行 */
		 
			for(j = 0; i < 3; i++)	/* j控制列 */
			printf("%3d", b[i][j]);
			printf("\n");	/* 输出一行后换行 */
		

	return 0;
}
