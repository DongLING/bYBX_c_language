 /*-----------------------------------------------------------------
 ����L9_7_1.C���ܣ����ַ������Ⱥ���int string_len(char str[])��
 ------------------------------------------------------------------*/
 int string_len(char str[])
 { int i;
   for (i=0;str[i]!='\0';i++);
   return i;
  }