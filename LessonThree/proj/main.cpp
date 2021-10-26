#include "df.h"


int main()
{
    SqList L;
    ElemType stu,stu_tmp;
    int cases;
    ll index;
    if(!InitList(L))
    {
        cout << "OVERFLOW!" << endl;
        exit(-1);
    }
    while (true)
    {
        BeginText();
        cin >> cases;
        switch (cases)
        {
            case 0:
                exit(-1);
                break;
            case 1:
                cout<<"Input number name age department."<<endl;
                CreateElem(stu);
                isDoErrorText(ListInsert(L, ListLength(L) + 1, stu));
                break;
            case 2:
                cout<<"Delete student information according to numbers."<<endl;
                cin>>stu.StudentNumber;
                index = LocateElem(L, stu, EQUAL);
                isDoErrorText(index && ListDelete(L, index, stu));
                break;
            case 3:
                cout<<"Renew student name according to numbers."<<endl;
                cin>>stu.StudentNumber;
                index = LocateElem(L, stu, EQUAL);
                if (index > 0)
                {
                    cout<<"Input new name:"<<endl;
                    cin>>stu.StudentName;
                    GetElem(L,index,stu_tmp);
                    stu.StudentAge = stu_tmp.StudentAge;
                    strcpy_s(stu_tmp.StudentName,stu.StudentName);
                    isDoErrorText(PutElem(L,index,stu));
                }
                else
                    isDoErrorText(NOTFOUND);
                break;
            case 4:
                cout<<"Input number to find the student."<<endl;
                cin>>stu.StudentNumber;
                index = LocateElem(L, stu, EQUAL);
                ElemType tempe;
                if (index)
                    PrintElem((GetElem(L,index,tempe),tempe));
                else
                    isDoErrorText(NOTFOUND);
                break;
            case 5:
                isDoErrorText(ListTraverse(L,VISIT));
                break;
            case 6:
                cout<<ListLength(L)<<endl;
                break;
        }
    }
    return 0;
}