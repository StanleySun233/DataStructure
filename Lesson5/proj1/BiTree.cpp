//
// Created by 70929 on 2021/12/18.
//

#include "BiTree.h"

void  PreCreateTree(leaf &root)
{
    char data1;
    cin >> data1;
    if (data1 =='#')
        root = NULL;
    else{
        root = (leaf)malloc(sizeof(TN));
        root->data = data1;
        PreCreateTree(root->left);
        PreCreateTree(root->right);
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