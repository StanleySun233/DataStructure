#include<stdio.h>
#include "t1.h"
void CreatComplex(Complex &c,float a,float b)
{
	c.real=a;
	c.imag=b;
}
void AddComplex(Complex &sum,Complex c1,Complex c2)
{
	sum.real=c1.real+c2.real;
	sum.imag=c1.imag+c2.imag;
}
void SubComplex(Complex &sub,Complex c1,Complex c2)
{
	sub.real=c1.real-c2.real;
	sub.imag=c1.imag-c2.imag;

}
void MulComplex(Complex &mul,Complex c1,Complex c2)
{
	float a=c1.real,b=c1.imag,c=c2.real,d=c2.imag;
	mul.real=a*c-b*d;
	mul.imag=a*d+b*c;
}
void  Print(Complex c)
{
	if (c.imag <0)
		printf("�ø����ǣ�%g%gi\n",c.real,c.imag);
	else
		printf("�ø����ǣ�%g+%gi\n",c.real,c.imag);
}
void Print_real(Complex c)
{
    printf("�ø�����ʵ���ǣ�%g\n",c.real);
}
void Print_imag(Complex c)
{
    printf("�ø������鲿�ǣ�%g\n",c.imag);
}
