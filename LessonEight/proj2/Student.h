//
// Created by 70929 on 2021/12/14.
//

#ifndef PROJ2_STUDENT_H
#define PROJ2_STUDENT_H

#include "iostream"
#include "string"
using namespace std;

struct student
{
    string name;
    int score;
};

void swap(student &stu1,student &stu2);
void addStudent(int n,student &s,student *a[]);
int Partition(student stu[],int low,int high);
void quickSort(student stu[],int low,int high);
void traverse(student s[],int n);
#endif //PROJ2_STUDENT_H
