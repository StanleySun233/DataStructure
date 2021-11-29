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

void MidTraverse1(leaf root)
{
    if (root)
    {
        MidTraverse1(root->left);
        cout<<root->data<<" ";
        MidTraverse1(root->right);
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
    {
        BiTreeInsert(root->left, key);
    }
    else {
        BiTreeInsert(root->right, key);
    }
}

void Traverse(leaf &root,leaf &r)
{
    if (r)
    {
        BiTreeInsert(root,r->data);
        Traverse(root,r->left);
        Traverse(root,r->right);
    }
}


leaf FindMin(leaf root)
{
    while(root->left != nullptr) root = root->left;
    return root;
}


leaf Delete(leaf &root, int data)
{
    if(root == nullptr) return root;
    else if(data < root->data) root->left = Delete(root->left,data);
    else if (data > root->data) root->right = Delete(root->right,data);
    else {
        if(root->left == nullptr && root->right == nullptr) {
            delete root;
            root = nullptr;
        }
        else if(root->left == nullptr) {
            leaf temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == nullptr) {
            leaf temp = root;
            root = root->left;
            delete temp;
        }
            // case 3: 2 children
        else {
            leaf temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    return root;
}
