#include "t1.h"
#include<stdio.h>
void main()
{
   float a,b,c,d;
   int i,j;
   Complex c1,c2,sum,sub,mul;
   printf("请分别输入两个复数的实部和虚部：\n");
   scanf("%f%f%f%f",&a,&b,&c,&d);//第一个复数的实部和虚部分别为a和b，第二个复数的实部和虚部分别为c和d
   CreatComplex(c1,a,b);
   Print(c1);
   CreatComplex(c2,c,d);
   Print(c2);
   printf("1.求和,\t2.求差,\t3.求积\t,4.退出\n");
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

