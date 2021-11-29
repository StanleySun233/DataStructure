#ifndef LESSONSEVEN_BITREESEARCH_H
#define LESSONSEVEN_BITREESEARCH_H

#include "iostream"
using namespace std;

typedef struct tnode TN;
typedef struct tnode* leaf;

struct tnode
{
    char data;
    leaf left,right;
};


#endif //LESSONSEVEN_BITREESEARCH_H
