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
/*�����ˆ᣿Ҳ�����f%p�䌍����%x����0x��~!@#$$%
�������ĳ�ʽ�OӋ����*/