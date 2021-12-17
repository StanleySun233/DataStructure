//
// Created by 70929 on 2021/12/18.
//

#include "Stack.h"

stack::stack()
{
    this->initStack();
}

stack::stack(stack &s)
{
    this->copy(s);
}

Status stack::initStack()
{
    memset(this->data,NULL,sizeof(this->data));
    this->p = 0;
    return OK;
}

Status stack::destoryStack()
{
    this->initStack();
    return OK;
}

Status stack::push(char c)
{
    if(this->length() >=MAXSIZE)
        return ERROR;
    this->data[++this->p] = c;
    return OK;
}

Status stack::reverse()
{
    auto *a = new stack;

    while(this->isEmpty())
    {
        a->push(this->pop());
    }
    this->copy(*a);
    return OK;
}

Status stack::traverse()
{
    if (!this->isEmpty())
        return ERROR;
    auto *a = new stack;
    a->copy(*this);
    while (a->isEmpty())
        cout<<a->pop()<<" ";
    cout<<endl;
    return OK;
}

Status stack::copy(stack &s)
{
    this->p = s.length();
    for(int i=1;i<=s.length();i++)
    {
        this->data[i] = s.data[i];
    }
    return OK;
}

bool stack::isEmpty()
{
    return this->p;
}
int stack::length()
{
    return this->p;
}

char stack::top()
{
    return this->data[this->p];
}

char stack::pop()
{
    if(this->length()<1)
        return ERROR;
    char temp;
    temp = this->top();
    this->data[this->p--] = NULL;
    return temp;
}