 /*----------------------------------------------------------
   ����L3_6.C���ܣ��ɼ�������һ���ɼ���Ȼ�������Ӧ�ĵȼ�
        "��"��"��"��"��"��"����"��"������"��
  -----------------------------------------------------------*/
 #include <stdio.h>
 void main()                 
 {
  int score;
  printf("������ѧ��������");
  scanf ("%d",&score);
  switch (score/10)
  { case 10:
    case 9: printf("�ɼ�����\n"); break;
    case 8: printf("�ɼ�����\n"); break;
    case 7: printf("�ɼ��е�n"); break;
    case 6: printf("�ɼ�����\n"); break;
    case 5:  
    case 4:  
    case 3:  
    case 2:  
    case 1:  
    case 0: printf("�ɼ�������\n"); break;
    default : printf("�����������\n");
   }
  }
