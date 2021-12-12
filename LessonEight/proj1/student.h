//
// Created by 70929 on 2021/11/29.
//

#ifndef PROJ1_STUDENT_H
#define PROJ1_STUDENT_H

#include "string"
#include "iostream"
using namespace std;

int n;
typedef struct student{
    char num[20];
    char name[25];
    int score;
}*Stu,StuNode;


void Display(Stu stu);
void Swap(StuNode &a,StuNode &b);
void InsertSort(Stu stu);
void BubbleSort(Stu stu);
int Partition(Stu stu,int low,int high);
void QuickSort(Stu stu,int low,int high);
void SelectionSort(Stu stu);
void HeapAdjust(Stu stu,int s,int m);
void HeapSort(Stu stu);
void Merge(Stu stu,int low,int mid,int high);
void MergeSort(Stu stu,int low,int high);

#endif //PROJ1_STUDENT_H
