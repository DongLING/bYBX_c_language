#include <stdio.h>

int main()
{   int x,y;
    scanf("x=%d,y=%d",&x,&y);
    if (x>=y)
       if (x==y)
       printf("Two numbers is equal! x=y!\n");
       else printf("x is greater than y!\n");
       else printf("x is less than y!\n");
     return 0;
}

