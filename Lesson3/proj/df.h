#include "iostream"
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

#define ll long long
#define scanf scanf_s
#define MAXSIZE 20

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE (-1)
#define OVER (-2)

#define NOTFOUND 2

#define FINDALL 0
#define FINDNUM 1
#define EQUAL 1
#define WRONGMODEL 3
#define VISIT 0
typedef int Status;

typedef struct {
    char StudentNumber[20];
    char StudentName[20];
    int StudentAge;
    char StudentDepartment[10];
}ElemType;

typedef struct Node   //链表的结点
{
    ElemType data;
    struct Node *next;
}Node,*SqList;



bool CharCompare(char a[],char b[]);
Status InitList(SqList &L);
Status DestoryList(SqList &L);
Status ClearList(SqList &L);
bool ListEmpty(SqList L);
ll ListLength(SqList L);
Status GetElem(SqList L, ll i, ElemType &e);
Status PutElem(SqList &L,ll i,ElemType &e);
bool compare(ElemType a, ElemType b);
ll LocateElem(SqList L, ElemType e,Status s);
Status ListInsert(SqList &L, ll i, ElemType e);
Status ListDelete(SqList &L, ll i, ElemType &e);
Status ListTraverse(SqList L,Status t);
void PrintElem(ElemType e);
void CreateElem(ElemType &e);
ll FindNumber(SqList L,ElemType e);
void BeginText();
void isDoErrorText(Status t);