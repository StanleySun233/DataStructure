#include "df.h"

Status InitStack(SqStack &s)
{
    s.top = 0;
    return OK;
}

Status DestroyStack(SqStack &s)
{
    free(&s);
    return OK;
}

Status ClearStack(SqStack &s)
{
    if (!StackEmpty(s))
    {
        s.top = 0;
    }
    return OK;
}

bool StackEmpty(SqStack s)
{
    return StackLength(s);
}

ll StackLength(SqStack s)
{
    return s.top;
}

Status GetTop(SqStack s,Elemtype &e)
{
    if (StackEmpty(s))
        e = s.sheet[s.top - 1];
    else
        return ERROR;
    return OK;
}

Status PushStack(SqStack &s,Elemtype &e)
{
    if (StackEmpty(s))
    {
        e = s.sheet[s.top - 1];
        s.top--;
    }
    else
        return ERROR;
    return OK;
}
Status PutStack(SqStack &s,Elemtype c)
{
    if (StackLength(s) > MAXSIZE)
        return OVERFLOW;
    else
    {
        s.sheet[s.top] = c;
        s.top++;
    }
    return OK;
}

Status StackTraverse(SqStack s,Status (*fun)(Elemtype c))
{
    if (StackEmpty(s))
        for(ll i = 0;i< StackLength(s);i++)
            (*fun)(s.sheet[i]);
    else
        return ERROR;
    cout<<endl;
    return OK;
}

Status ReadData(Elemtype &e)
{
    char temp;
    cin>>temp;
    e = temp;
    return OK;
}

Status Visit(Elemtype c)
{
    cout<<c<<" ";
    return OK;
}

Status StackReverse(SqStack &s)
{
    SqStack temp;
    InitStack(temp);
    ll l = StackLength(s);
    for(ll i = 0;i <l ; i++)
    {
        Elemtype e0;
        PushStack(s, e0);
        PutStack(temp, e0);
    }
    s = temp;
    return OK;
}