#ifndef LESSONSEVEN_BITREESEARCH_H
#define LESSONSEVEN_BITREESEARCH_H

#include "iostream"
using namespace std;

typedef struct TNode TN;
typedef struct TNode* leaf;

struct TNode
{
    int data;
    leaf left,right;
};

void PreCreateTree(leaf &k);
void PreTraverse(leaf root);
void MidTraverse(leaf root);
leaf SearchLeafCompare(leaf root, int key);
void BiTreeInsert(leaf &root, int key);
int Delete(leaf &root, int data);
void DelTraverse(leaf root, int key);
void s(leaf root,float deep);
float average(leaf root);
#endif //LESSONSEVEN_BITREESEARCH_H
