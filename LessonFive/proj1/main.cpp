#include<iostream>
#include<stack>

using namespace std;
typedef struct tnode TN;
typedef struct tnode* leaf;

struct tnode
{
    char data;
    leaf left,right;
};

void  PreCreateTree(leaf &k)
{
    char data1;
    cin >> data1;
    if (data1 =='#')
        k = NULL;
    else{
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

void MidTraverse1(leaf root)
{
    if (root)
    {
        MidTraverse1(root->left);
        cout<<root->data<<" ";
        MidTraverse1(root->right);
    }
}

void BackTraverse(leaf root)
{
    if (root)
    {
        BackTraverse(root->left);
        BackTraverse(root->right);
        cout << root->data << " ";
    }
}

void MidTraverse2(leaf &root)
{
    stack<leaf> s;
    leaf p = root;
    while(p || !s.empty())
    {
        if(p)
        {
            s.push(p);
            p = p->left;
        }
        else
        {
            p = s.top();
            s.pop();
            cout<<p->data<<" ";
            p = p->right;
        }
    }
}


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