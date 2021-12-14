//
// Created by 70929 on 2021/12/18.
//

#ifndef PROJ1_BITREE_H
#define PROJ1_BITREE_H

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

void  PreCreateTree(leaf &root);
void PreTraverse(leaf root);
void MidTraverse1(leaf root);
void BackTraverse(leaf root);
void MidTraverse2(leaf &root);


#endif //PROJ1_BITREE_H
