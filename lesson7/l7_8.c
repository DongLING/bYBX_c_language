/*------------------------------------------------------------------
 ����L7_8.C : ͳ��2��ѧ���ɼ������г���������num[2]���ѧ����ѧ�ţ�
 ��ά����score[2][3]���ѧ���ɼ�������i��ѧ����Ӣ��ɼ�Ϊscore[i][0]��
 ��ѧ�ɼ�Ϊscore[i][1]�����ĳɼ�Ϊscore[i][2]��aver[2]���ѧ����ƽ���ɼ�
 -------------------------------------------------------------------------*/
 #include <stdio.h>

/*����n��ѧ��ѧ�ź͸��γɼ���������ƽ����*/
void input(long num[], int score[][3],float aver[],int n)
{int i,j;
for (i=0;i<n;i++)
  {  printf("ѧ��Ϊ��");
     scanf("%ld",&num[i]);
     printf("\n���Ƴɼ�Ӣ�� ���� �����Ϊ��\n");
     aver[i]=0;
     for (j=0;j<3;j++)
       { scanf("%d",&score[i][j]);
	      aver[i]+=score[i][j];
       }
     aver[i]/=3;
     }
}

/*������*/
void output(long num[], int score[][3],float aver[],int n)
{ int i,j;
  printf("    ѧ�� Ӣ�� ���� ����� ƽ����\n");
  for (i=0;i<n;i++)
    { printf ("%8ld",num[i]);
      for (j=0;j<3;j++)
	      printf("%5d",score[i][j]);
      printf("%8.1f",aver[i]);
      printf("\n");
      } 
 }

 void main( )
 { long num[2];  /*��2��ѧ��Ϊ��*/
   int score[2][3];
   float aver[2];
   input(num,score,aver,2);
   output(num,score,aver,2);
   }
