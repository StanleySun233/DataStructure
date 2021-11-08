#include "iostream"
using namespace std;
typedef struct tnode TN;
typedef struct tnode* TT;

struct tnode
{
    char data;
    TT left,right;
};