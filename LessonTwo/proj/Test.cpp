#include "DefineList.h"

#define scanf scanf_s

int main()
{
    ElemType a[5],del;
    SqList A;
    cout<<"Input information of Number, Name, Age, Department, Split by space"<<endl;

    for(int i=0;i<5;i++)
        CreateElem(a[i]);
    for(int i=0;i<5;i++)
        PrintElem(a[i]);
    InitList(A);

    cout<<"Test for Function <ListEmpty>, predice result is 0 (or false), acutal result shows : ";
    cout<<ListEmpty(A)<<endl;
    for(int i=0;i<5;i++)
        ListInsert(A,i+1,a[i]);

    cout<<"Test for Function <ListLength>, predice result is 5, acutal result shows : ";
    cout<<ListLength(A)<<endl;

    cout<<"Test for Function <ListTraverse>"<<endl;
    ListTraverse(A);

    cout<<"Test for Function <compare>, predice result is 1, acutal result shows : ";
    cout<<compare(a[0],A.data[0])<<endl;

    cout<<"Test for Function <ListDelete>, predice result is ";
    ListDelete(A,1,del);
    PrintElem(a[0]);
    cout<<"acutal result shows : ";
    PrintElem(del);
}

/*
 * Test Result:
    bool CharCompare(char a[],char b[])                             SUCCESS
    Status InitList(SqList &L);                                     SUCCESS
    Status DestoryList(SqList &L);                                  SUCCESS
    Status ClearList(SqList &L);                                    SUCCESS
    bool ListEmpty(SqList L);                                       SUCCESS
    ll ListLength(SqList L);                                        SUCCESS
    Status GetElem(SqList L, ll i, ElemType *e);                    SUCCESS
    bool compare(ElemType a, ElemType b);                           SUCCESS
    ll LocateElem(SqList L, ElemType e);                            SUCCESS
    Status PriorElem(SqList L, ElemType cur_e, ElemType &pre_e);    SUCCESS
    Status NextElem(SqList L, ElemType cur_e, ElemType &next_e);    SUCCESS
    Status ListInsert(SqList &L, ll i, ElemType e);                 SUCCESS
    Status ListDelete(SqList &L, ll i, ElemType &e);                SUCCESS
    Status ListTraverse(SqList L);                                  SUCCESS
    void UnionList(SqList &La, SqList Lb);                          SUCCESS
    void PrintElem(ElemType e);                                     SUCCESS
    void CreateElem(ElemType &e);                                   SUCCESS
 */
