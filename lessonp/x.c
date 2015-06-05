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
执行两次输出结果是相同的，执行两次应该分配不同的地址，输出结果却是相同的。*/