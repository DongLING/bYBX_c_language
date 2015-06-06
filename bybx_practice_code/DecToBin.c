#include<stdio.h>
#include<malloc.h>
#define null 0
typedef struct node //定义结构体
{
int data;
struct node *next;
}slnode;

void initiate(slnode **h) //初始化
{
*h=(slnode *)malloc(sizeof(slnode));
(*h)->next =null;
}

void pushls(slnode *h,int x) //实现余数进栈
{
slnode *p;
p=(slnode *)malloc(sizeof(slnode));
p->data =x;
p->next =h->next ;
h->next =p;
}

void travel(slnode *h) //遍历输出
{
slnode *p;
p=h->next ;
while(p!=null)
{
printf("%d",p->data );
p=p->next;
}
}

void main() //主函数
{
int r,s,t;
slnode *L;
initiate(&L);
printf("输入一个十进制数：");
scanf("%d",&r);
do
{
s=r%2;
t=r-s;
r=r/2;
pushls(L,s);


}while(r!=0);
printf("所得二进制数为：");
travel(L);
printf("\n");}
