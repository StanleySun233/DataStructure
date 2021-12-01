#include "BiTreeSearch.h"

void PreCreateTree(leaf &k)
{
    int data1;
    cin >> data1;
    if (data1 == '#')
        k = nullptr;
    else
    {
        k = (leaf)malloc(sizeof(TN));
        k->data = data1;
        PreCreateTree(k->left);
        PreCreateTree(k->right);
    }
}

void PreTraverse(leaf root)
{
    if (root)
    {
        cout<<root->data<<" ";
        PreTraverse(root->left);
        PreTraverse(root->right);
    }
}

void MidTraverse(leaf root)
{
    if (root)
    {
        MidTraverse(root->left);
        cout<<root->data<<" ";
        MidTraverse(root->right);
    }
}

leaf SearchLeafCompare(leaf root, int key)
{
    if (root == nullptr)
        return nullptr;
    if (key > root->data)
        return SearchLeafCompare(root->right, key);
    else if (key < root->data)
        return SearchLeafCompare(root->left, key);
    else
        return root;
}

void BiTreeInsert(leaf &root, int key)
{
    if (root == nullptr)
    {
        root = (leaf)malloc(sizeof(TN));
        root->data = key;
        leaf p1 = nullptr;
        leaf p2 = nullptr;
        root->left=p1;
        root->right=p2;
        return;
    }

    if(root->data > key)
        BiTreeInsert(root->left, key);
    else
        BiTreeInsert(root->right, key);
}

int a[100];
int n = 0;

int Delete(leaf &root, int data)
{
    auto *p1 = SearchLeafCompare(root,data);
    int res = p1->data;
    leaf rt = nullptr;
    n = 0;

    DelTraverse(root, res);

    for(int i = 0;i<n;i++)
        BiTreeInsert(rt,a[i]);
    root = rt;
    return res;
}

void DelTraverse(leaf root, int key)
{
    if (root)
    {
        if(key != root->data)
        {
            a[n] = root->data;
            n++;
        }
        DelTraverse(root->left, key);
        DelTraverse(root->right, key);
    }
}

float res = 0;
float l = 1;
void s(leaf root,float deep)
{
    auto p = root;
    if (root)
    {
        res +=deep;
        l = max(l,deep+1);
        s(root->left,deep+1);
        s(root->right,deep+1);
    }
}

float average(leaf root)
{
    res = 0;
    l = 1;
    s(root,1);
    cout<<"res"<<res<<"l"<<l<<endl;
    return (res / l);
}