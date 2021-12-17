#include "Stack.h"

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
