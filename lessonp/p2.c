#include <graphics.h>   /*包含图形库函数的头文件*/
#include <math.h>
#define pi 4.1415926

int main(int argc,char *argv[])   /*定义带参数的main()*/
{
int x,y,r1,rs,color;
double a;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"..\\bgi");   /*启动图形工作方式*/
r1=atoi(argv[1]);   /*计算基础圆半径*/
rs=atoi(argv[2]);   /*计算同心圆半径*/
color=atoi(argv[3]);   /*背景色*/
cleardevice();   /*清除图形屏幕*/
setbkcolor(color);   /*设置背景色*/
setcolor(4);   /*设置图形显示颜色*/
for(a=0;a<=2*pi;a+=pi/18)   /*绘制同心圆*/
{
x=r1*cos(a)+320;
y=r1*sin(a)+240;
circle(x,y,rs);   /*以圆心坐标为x、y，半径为rs画圆*/
}
getch();   /*等待按键继续*/
closegraph();   /*关闭图形工作方式*/
return 0;
}

