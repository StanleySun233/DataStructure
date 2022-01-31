#include "df.h"

bool isParenCompare(SqStack &s)
{
    SqStack s0;
    InitStack(s0);
    while(StackEmpty(s))
    {
        Elemtype e1;
        PushStack(s,e1);
        if ( e1 == ')' or e1 == ']' or e1 == '}' )
            PutStack(s0,e1);
        elif ( StackLength(s0) == 0 )
            return false;
        else
        {
            Elemtype e2;
            PushStack(s0,e2);
            PushStack(s0,e1);
            if ( e1 + e2 == 81 or e1 + e2 == 248 or e1 + e2 == 184 )
            {
                continue;
            }
            else
            {
                cout<<e1<<e2<<endl;
                if ( ( e1 == '(' and e2 != ')' ) or ( e1 == '{' and e2 != '}' ) or ( e1 == '[' and e2 != ']' ) or ( e1 == ')' or e1 == ']' or e1 == '}' ) )
                {
                    PutStack(s0, e1);
                    PutStack(s0, e2);
                }
                else
                {
                    cout<<e1<<e2<<endl;
                    return false;
                }
            }
        }
    }
    if (!StackLength(s0))
        return true;
    else
        return false;
}


bool isParen(char c)
{
    if (c == '(' or c ==')' or c == '[' or c == ']' or c == '{' or c == '}')
        return true;
    else
        return false;
}

int main()
{
    SqStack s;
    InitStack(s);
    ll _;
    cout<<"input the length of the string."<<endl;
    cin>>_;
    for (ll i=0;i<_;i++)
    {
        Elemtype temp;
        cin>>temp;
        PutStack(s,temp);
    }
    cout<<"the origin string is ";
    StackTraverse(s,Visit);

    SqStack paren,text;
    InitStack(paren);
    InitStack(text);
    for(ll i =0;i<_;i++)
    {
        Elemtype e;
        PushStack(s,e);
        if(isParen(e))
            PutStack(paren,e);
        else
            PutStack(text,e);
    }


    StackReverse(paren);
    StackReverse(text);
    cout<<"the text part is ";
    StackTraverse(text,Visit);
    cout<<"the paren part is ";
    StackTraverse(paren,Visit);

    cout<<endl<<isParenCompare(paren);

}

/*
7
(3+4)*2

 6
(()())

 8
 ()(){}()

 4
 ({})

 5
 ()()(

 4
 ({})

 4
 {(})
 */
