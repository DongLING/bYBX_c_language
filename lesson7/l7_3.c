 /*-----------------------------------------------------------
  ����L7_3.C���ܣ�һά�����ʼ���ļ�����ʽ��
 -------------------------------------------------------------*/  
/*
 * "%s/\r//g" command is used for delete '^M' in a file.
 * The name of "{}" is "curly bracket" or "brace".
 */

#include <stdio.h>

int main() 
{
	int n;
	int a[5] = { 0, 1, 2, 3, 4 };
	int b[5] = { 1, 2 };
	float c[] = { 1, 2, 3, 4, 5 };

	for (n = 0; n < 5; n++)	printf("%5d", a[n]);
	printf("\n");

	for (n = 0; n < 5; n++)	printf("%5d", b[n]);
	printf("\n");

	for (n = 0; n < 5; n++)	printf("%5.1f", c[n]);
	printf("\n");

	return 0;
}
