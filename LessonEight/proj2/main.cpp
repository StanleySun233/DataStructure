#include "Student.h"


int main() {
    int n;
    cin>>n;
    student s[STUDENTSIZE];
    int t;
    string a;
    for (int i =0;i<n;i++)
    {
        cin>>t>>a;
        s[i].name = a;
        s[i].score = t;
    }
    traverse(s,n);
    int cases;
    cin>>cases;
    switch (cases)
    {
        case 0:
            exit(0);
        case 1:
            quickSort(s,0,n-1);
            break;
        case 2:
            bucketSorting(s,n);
            break;
        case 3:
            bubbleSort(s,n);
            break;
        case 4:
            selectSort(s,n);
            break;
        case 5:
            insertSort(s,n);
            break;
    }
    cout<<"==========="<<endl;
    traverse(s,n);
}


/* case1
5
23 ssj1
32 ssj2
10 ssj3
40 ssj4
5 ssj5
 */

/* case2
4
128 ssj1
12 ssj2
10 ssj3
96 ssj4
 */

/* case2
4
128 ssj1
118 ssj2
108 ssj3
98 ssj4
 */