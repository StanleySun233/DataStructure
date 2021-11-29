#include <iostream>
#include "BiTreeSearch.h"

int main() {
    leaf rankTree = nullptr;
    int i;
    cin>>i;
    while (i)
    {
        int num;
        cin>>num;
        BiTreeInsert(rankTree,num);
        i--;
    }
    cout<<"Create success."<<endl;

    PreTraverse(rankTree);
    cout<<endl;

    MidTraverse1(rankTree);
    cout<<endl;
}
