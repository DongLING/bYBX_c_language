#include <stdio.h>
#include <alloc.h>
#include <string.h>

int main(void)
{
char *str;

str = malloc(10);
strcpy(str, "Hello");
printf("String is %s\n Address is %p\n", str, str);
str = realloc(str, 20);
printf("String is %s\n New address is %p\n", str, str);
free(str);
return 0;
}
/*
ִ����������������ͬ�ģ�ִ������Ӧ�÷��䲻ͬ�ĵ�ַ��������ȴ����ͬ�ġ�*/