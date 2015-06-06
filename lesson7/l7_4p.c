#include <stdio.h>

int main()
{
	int a[4][4];
	char b[5][4];

	int i, j;
	for(i = 0; i < 4; i++)
		{
			for(j = 0; j < 4; j++)
				{
					if(i == j) a[i][j] = 1;
					else a[i][j] = 0;
				}
		}

	for(i = 0; i < 5; i++)
		{
			for(j = 0; j < 4; j++)
				{
					if(i >= j) b[i][j] = '*';
					else b[i][j] = '#';
				}
		}

	printf("Array a:\n");
	for(i = 0; i < 4; i++)
		{
			for(j = 0; j < 4; j++)
			printf("%3d", a[i][j]);
			printf("\n");
		}

	printf("Array b:\n");
	for(i = 0; i < 4; i++)
		{
			for(j = 0; j < 5; j++)
			printf("%3c", b[i][j]);
			printf("\n");
		}

	return 0;
}
