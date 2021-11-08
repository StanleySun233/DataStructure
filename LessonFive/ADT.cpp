#include "df.h"

Status InitTree(BTNode &T)
{
    T.left = NULL;
    T.right = NULL;
    T.data = NULL;
}
Status DestroyTree(BTree &T);
Status CreateTree(BTree &T, Status &definition(BTNode a));
Status ClearTree(BTree &T);
bool TreeEmpty(BTree T);
ll TreeDepth(BTNode T);
BTNode Root(BTree T);
Status Value(BTree T, BTNode &cur_e);
Status Assign(BTree T, BTNode &cur_e, char value);
Status Parent(BTree T, BTNode &cur_e);
BTNode LeftChild(BTree T, BTNode &cur_e);
BTNode Right(BTree T, BTNode &cur_e);
Status InsertChild(BTree &T,BTNode &p,ll i,BTNode &c);
Status DeleteChild(BTree &T,BTNode &p,ll i);
Status TraverseTree(BTree &T,Status &Visit(BTNode a));