#include "t1.h"
#include<stdio.h>
void main()
{
   float a,b,c,d;
   int i,j;
   Complex c1,c2,sum,sub,mul;
   printf("��ֱ���������������ʵ�����鲿��\n");
   scanf("%f%f%f%f",&a,&b,&c,&d);//��һ��������ʵ�����鲿�ֱ�Ϊa��b���ڶ���������ʵ�����鲿�ֱ�Ϊc��d
   CreatComplex(c1,a,b);
   Print(c1);
   CreatComplex(c2,c,d);
   Print(c2);
   printf("1.���,\t2.���,\t3.���\t,4.�˳�\n");
   for(j=0;;j++)
   {
       scanf("%d",&i);
      switch(i)
      {
       case 1:
		AddComplex(sum,c1,c2);
        Print_real(sum);
        Print_imag(sum);
		Print(sum);
        break;
      case 2:
        SubComplex(sub,c1,c2);
        Print_real(sub);
        Print_imag(sub);
		Print(sub);
        break;
      case 3:
	    MulComplex(mul,c1,c2);
        Print_real(mul);
        Print_imag(mul);
		Print(mul);
        break;
      case 4:
        return;
      }
   }
}

