#include <iostream>
#include<iostream>
#include<stack>

using namespace std;
typedef struct tnode BiTree;
typedef struct tnode* leaf;
typedef int Status;
#define OK 1
#define ERROR 0
struct tnode
{
    char data;
    leaf left,right;
};

Status PreCreateTree(leaf &k)
{
    char data1;
    cin >> data1;
    if (data1 =='#')
        k = NULL;
    else{
        k = (leaf)malloc(sizeof(BiTree));
        k->data = data1;
        PreCreateTree(k->left);
        PreCreateTree(k->right);
    }
}

Status InitBiTree(BiTree &root)
{
    root.data = NULL;
    root.right = NULL;
    root.left = NULL;
    return OK;
}

Status DestroyBiTree(BiTree &root)
{
    InitBiTree(root);
    return OK;
}

Status ClearBiTree(BiTree &root)
{
    InitBiTree(root);
    return OK;
}

bool BiTreeEmpty(BiTree &root)
{
    if (root.left or root.right or root.data)
        return true;
    else
        return false;
}

BiTree Root(leaf root)
{
    return *root;
}


BiTree  Value(BiTree T,  leaf e);
//初始条件：二叉树T已存在，e是T的某个节点
//操作结果：返回e的值

Status Assign(BiTree T,  leaf& e,char value);
//初始条件：二叉树T已存在，e是T的某个节点
//操作结果：e赋值为value

BiTree * Parent(BiTree T,BiTree  e);
//初始条件：二叉树T已存在，e是T的某个节点
//操作结果：若e是T的非根节点，则返回他的双亲，否则返回NULL

BiTree * LeftChild(BiTree T, leaf e);
//初始条件：二叉树T已存在，e是T的某个节点
//操作结果：返回e的左孩子。若e无左孩子，则返回NULL

BiTree * RightChild(BiTree T,  leaf e);
//初始条件：二叉树T已存在，e是T的某个节点
//操作结果：返回e的右孩子。若e无右孩子，则返回NULL

BiTree * LeftSibling(BiTree T,  leaf e);
//初始条件：二叉树T已存在，e是T的某个节点
//操作结果：返回e的左兄弟。若e是T的左孩子或无左兄弟，则返回NULL

BiTree * RightSibling(BiTree T,  leaf e);
//初始条件：二叉树T已存在，e是T的某个节点
//操作结果：返回e的右兄弟。若e是T的右孩子或无右兄弟，则返回NULL

Status InsertChild(BiTree T,  leaf* p, Status LR, BiTree c);
//初始条件：二叉树T已存在，p指向T的某个节点，LR为左右标记，非空二叉树c与T不相交且右子树为空
//操作结果：根据LR指示，插入c为T中p所指节点的左或右子树。p所指结点的原有左或右子树则成为c的右子树

Status DeleteChild(BiTree T, leaf* p, Status LR);
//初始条件：二叉树T已存在，p指向T的某个节点，LR为左右标记
//操作结果：根据LR指示，删除T中p所指节点的左或右子树
