//
// Created by 70929 on 2021/12/18.
//

#include <iostream>
using namespace std;

#define MAXSIZE 50
#define Status int
#define ERROR 0
#define OK 1


#ifndef PROJ2_STACK_H
#define PROJ2_STACK_H

class stack
{
private:
    char data[MAXSIZE];
    int p;
public:
    stack();
    stack(stack &s);
    Status initStack();
    Status destoryStack();
    Status push(char c);
    Status reverse();
    Status traverse();
    Status copy(stack &s);
    bool isEmpty();
    int length();
    char top();
    char pop();
};

#endif //PROJ2_STACK_H
