#include <graphics.h>   /*����ͼ�ο⺯����ͷ�ļ�*/
#include <math.h>
#define pi 4.1415926

int main(int argc,char *argv[])   /*�����������main()*/
{
int x,y,r1,rs,color;
double a;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"..\\bgi");   /*����ͼ�ι�����ʽ*/
r1=atoi(argv[1]);   /*�������Բ�뾶*/
rs=atoi(argv[2]);   /*����ͬ��Բ�뾶*/
color=atoi(argv[3]);   /*����ɫ*/
cleardevice();   /*���ͼ����Ļ*/
setbkcolor(color);   /*���ñ���ɫ*/
setcolor(4);   /*����ͼ����ʾ��ɫ*/
for(a=0;a<=2*pi;a+=pi/18)   /*����ͬ��Բ*/
{
x=r1*cos(a)+320;
y=r1*sin(a)+240;
circle(x,y,rs);   /*��Բ������Ϊx��y���뾶Ϊrs��Բ*/
}
getch();   /*�ȴ���������*/
closegraph();   /*�ر�ͼ�ι�����ʽ*/
return 0;
}

