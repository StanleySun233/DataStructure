#include "Student.h"


int main() {
    int n = 5;
    student s[10];
    int t;
    string a;
    for (int i =0;i<n;i++)
    {
        cin>>t>>a;
        s[i].name = a;
        s[i].score = t;
    }
    traverse(s,n);
    quickSort(s,0,n - 1);
    cout<<"========="<<endl;
    traverse(s,n);
}
/*
23 ssj1
32 ssj2
10 ssj3
40 ssj4
5 ssj5
 */