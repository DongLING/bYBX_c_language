#include <stdio.h>
int main()
{
    int *vp;
    int abc = 123;
    vp = &abc;

    printf("abc = 0x%x &abc = 0x%x\n",abc,&abc);
    printf("&vp = 0x%x vp = 0x%x *vp = 0x%x\n",&vp,vp,*vp);
    printf("vp = %p abc = %p\n",vp,abc);

    return 0;
}
/*看到了嗎？也就是說%p其實就是%x加了0x，~!@#$$%
按他媽的程式設計師。*/