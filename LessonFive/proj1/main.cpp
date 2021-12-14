#include "BiTree.h"


int main()
{
    leaf st = NULL;
    cout<<"PreCreate"<<endl;
    PreCreateTree(st);
    cout << "PreTraverse"<< endl;
    PreTraverse(st);
    cout << endl;

    cout << "MidTraverse1"<< endl;
    MidTraverse1(st);
    cout << endl;

    cout << "MidTraverse2"<< endl;
    MidTraverse2(st);
    cout << endl;

    cout << "BackTraverse"<< endl;
    BackTraverse(st);
    cout << endl;
    return 0;
}
