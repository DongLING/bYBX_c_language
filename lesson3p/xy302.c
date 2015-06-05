#include <stdio.h>

int main()
{
    int x,y,z,t;
    printf("Please input three numbers (a,b,c):");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>=y){t=x;x=y;y=t;}
    if(x>=z){t=x;x=z;z=t;}
    if(y>=z){t=y;y=z;z=t;}
    printf("\n%d,%d,%d\n",x,y,z);
    return 0;
}