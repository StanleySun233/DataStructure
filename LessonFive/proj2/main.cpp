#include <iostream>
using namespace std;

#define MAXSIZE 50
#define Status int
#define ERROR 0
#define OK 1

class stack
{
private:
    char data[MAXSIZE];
    int p;
public:
    stack();
    stack(stack &s);
    Status initStack();
    Status destoryStack();
    Status push(char c);
    Status reverse();
    Status traverse();
    Status copy(stack &s);
    bool isEmpty();
    int length();
    char top();
    char pop();
};

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

int main()
{
    stack s;
    while (true)
    {
        int a;
        cin >> a;
        switch (a)
        {
            case 0:
                exit(-1);
            case 1:
                char c;
                cin >> c;
                s.push(c);
                cout << s.top() << " is pushed." << endl;
                break;
            case 2:
                cout<<"stack length is "<<s.length()<<endl;
                break;
            case 3:
                cout<<"stack top is "<<s.top()<<endl;
                break;
            case 4:
                cout<<s.pop()<<" is poped"<<endl;
                break;
            case 5:
                cout<<s.isEmpty()<<" if empty"<<endl;
                break;
            case 6:
                s.traverse();
                break;
            case 7:
                s.traverse();
                s.reverse();
                cout<<"stack is reversed."<<endl;
                s.traverse();
                break;
        }
    }
    return 0;
}
