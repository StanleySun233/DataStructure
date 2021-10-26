#include<stdio.h>

typedef struct Complex
{
    float real;
    float imag;
}Complex;  
void CreatComplex(Complex &c,float a,float b);
void AddComplex(Complex &sum,Complex c1,Complex c2);
void SubComplex(Complex &sub,Complex c1,Complex c2);
void MulComplex(Complex &mul,Complex c1,Complex c2);
void Print(Complex c);
void Print_real(Complex c);
void Print_imag(Complex c);
