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
void MidTraverse1(leaf root);
leaf SearchLeafCompare(leaf root, int key);
void BiTreeInsert(leaf &root, int key);

#endif //LESSONSEVEN_BITREESEARCH_H
