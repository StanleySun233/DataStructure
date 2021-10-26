#include<iostream>
#include "string"
#include "string.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 50
#define elif else if
#define ll long long


using namespace std;
typedef int Status;


typedef struct
{
    char sheet[MAXSIZE];
}StrArray;

typedef char Elemtype;

typedef struct
{
    char sheet[MAXSIZE];
    ll top;
}SqStack;


Status InitStack(SqStack &s);
Status DestroyStack(SqStack &s);
Status ClearStack(SqStack &s);
bool StackEmpty(SqStack s);
ll StackLength(SqStack s);
Status GetTop(SqStack s,Elemtype &e);
Status PushStack(SqStack &s,Elemtype &e);
Status PutStack(SqStack &s,Elemtype e);
Status StackTraverse(SqStack s,Status (*fun)(Elemtype c));
Status ReadData(Elemtype &e);
Status Visit(Elemtype c);
Status StackReverse(SqStack &s);