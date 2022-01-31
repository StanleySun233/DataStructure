#include"DefineList.h"

using namespace std;

bool CharCompare(char a[],char b[])
{
    ll len_a = strlen(a);
    ll len_b = strlen(b);
    if (len_a != len_b)
        return false;
    for (ll i = 0;i<len_b;i++)
        if (a[i] != b[i])
            return false;
    return true;
}

Status InitList(SqList &L)
{
    memset(L.data,0,sizeof(L));
    L.length=0;
    return OK;
}

Status DestoryList(SqList &L)
{
    L.length=0;
    return OK;
}

Status ClearList(SqList &L)
{
    if (!L.length)
    {
        L.length = 0;
        memset(L.data, 0, sizeof(L));
        return OK;
    }
    return ERROR;
}

bool ListEmpty(SqList L)
{
    return bool(ListLength(L)) == 1;
}

ll ListLength(SqList L)
{
    return L.length;
}

Status GetElem(SqList L, ll i, ElemType &e)
{
    if(L.length == 0 || i <1 || i>L.length)
        return ERROR;
    e = L.data[i-1];
    return OK;
}

bool compare(ElemType a, ElemType b)
{
     return (a.StudentAge == b.StudentAge) || CharCompare(a.StudentNumber,b.StudentNumber) || CharCompare(a.StudentDepartment,b.StudentDepartment) ||
             CharCompare(a.StudentName,b.StudentName);
}

ll LocateElem(SqList L, ElemType e,Status s)
{
    if (s == FINDALL)
    {
        for (ll i = 0; i < L.length; i++)
            if (compare(L.data[i], e))
                return i + 1;
        return NOTFOUND;
    }
    if (s == EQUAL)
        return FindNumber(L,e);
    return WRONGMODEL;
}

Status PriorElem(SqList L, ElemType cur_e, ElemType &pre_e)
{
    ll index = LocateElem(L,cur_e,FINDALL);
    if (index || index - 1)
    {
        pre_e = L.data[index];
        return OK;
    }
    return ERROR;
}

Status NextElem(SqList L, ElemType cur_e, ElemType &next_e)
{
    ll index = LocateElem(L,cur_e,FINDALL);
    if (index || index + 1 < MAXSIZE)
    {
        next_e = L.data[index];
        return OK;
    }
    return ERROR;
}

Status ListInsert(SqList &L, ll i, ElemType e)
{
    if (L.length == MAXSIZE)
        return OVER;
    if (L.length +1 <i || i < 1)
        return ERROR;
    if (i <= L.length)
        if (LocateElem(L, e, EQUAL))
            for (ll k = L.length-1;k>=i-1;k--)
                L.data[k+1]=L.data[k];
        else
            return INFEASIBLE;
    else
        return ERROR;
    L.data[i-1]=e;
    L.length++;
    return OK;
}

Status ListDelete(SqList &L, ll i, ElemType &e)
{
    if (L.length == 0)
        return ERROR;
    if(L.length + 1 < i || i < 1)
        return ERROR;
    if(i <= L.length)
        for (ll k = i ; k<= L.length ; k++)
            L.data[k-1] = L.data[k];
    e = L.data[i];
    L.length--;
    return OK;
}
Status ListTraverse(SqList L,Status t)
{
    switch (t)
    {
        case VISIT:
            if (L.length)
                for(ll i = 0;i<L.length;i++)
                    PrintElem(L.data[i]);
            else
                return ERROR;
            return OK;
            break;
    }
    return ERROR;
}

Status PutElem(SqList &L,ll i,ElemType &e)
{
    if (i == 0 || i >L.length )
        return ERROR;
    L.data[i-1] = e;
    return OK;
}

void UnionList(SqList &La, SqList Lb)
{

}

void PrintElem(ElemType e)
{
    cout<<"Number \t\t"<<e.StudentNumber<<endl;
    cout<<"Name \t\t"<<e.StudentName<<endl;
    cout<<"Age \t\t"<<e.StudentAge<<endl;
    cout<<"Department \t"<<e.StudentDepartment<<endl<<endl;
}

void CreateElem(ElemType &e)
{
    cin>>e.StudentNumber>>e.StudentName>>e.StudentAge>>e.StudentDepartment;
}

ll FindNumber(SqList L,ElemType e)
{
    ll pos =0;
    for (ll p = 0;p<L.length;p++)
        if (CharCompare(L.data[p].StudentNumber , e.StudentNumber))
            pos = p+1;
    return pos;
}
void BeginText()
{
    cout<<"Please select the function:"<<endl;
    cout<<"0\texit"<<endl;
    cout<<"1\tinsert student"<<endl;
    cout<<"2\tdelete student"<<endl;
    cout<<"3\tupdate student name"<<endl;
    cout<<"4\tsearch student with number"<<endl;
    cout<<"5\tshow all student"<<endl;
    cout<<"6\tcount the student"<<endl;
    cout<<"Please input:"<<endl;
}

void isDoErrorText(Status t)
{
    switch (t)
    {
        case OK:
            cout<<"<SUCCESS>"<<endl;
            break;
        case INFEASIBLE:
            cout<<"<UNSUCCESS>Fine the same number in List."<<endl;
            break;
        case ERROR:
            cout<<"<UNSUCCESS>Input number is longer than List range."<<endl;
            break;
        case OVER:
            cout<<"<UNSUCCESS>List has already been full."<<endl;
            break;
        case NOTFOUND:
            cout<<"<UNSUCCESS>Student can't be found."<<endl;
            break;
        case WRONGMODEL:
            cout<<"<UNSUCCESS>A wrong model is given."<<endl;
            break;
    }
}