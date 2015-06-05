#include <stdio.h>

int main()
{
    float f,c;
    printf("Please a temparture on Fahrenhait is:\n");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("The temperature converted on Celsius is:%3.1f\n",c);
    return 0;
}