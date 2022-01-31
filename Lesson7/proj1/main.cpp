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

    cout<<"Create Success."<<endl;
    PreTraverse(rankTree);
    cout<<endl;

    Delete(rankTree,5);

    PreTraverse(rankTree);
    cout<<endl;

    cout<<average(rankTree)<<endl;
    return 0;
}
