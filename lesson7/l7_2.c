 /*----------------------------------------------------------
  ����L7_2.C���ܣ�����10������������������
  ----------------------------------------------------------*/  
#include <stdio.h>

int main() 
{
	int i, array[10], big;
	
    /*������������Ԫ�ظ�ֵ  */ 
	printf("Use a 'space' key for separat the numbers inputted, please!\n");
    for(i = 0; i < 10; i++) scanf("%d", &array[i]);
	
    /*�ҳ�����������Ԫ�� */ 
    big = array[0];
	/* The 'for' statement + the 'if' statement + assignment statement */
	for(i = 0; i < 10; i++) if(array[i] > big) big = array[i];
	printf("The biggest number is: %d.\n", big);

	return 0;
}
