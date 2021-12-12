//
// Created by 70929 on 2021/12/14.
//

#ifndef PROJ2_STUDENT_H
#define PROJ2_STUDENT_H

#define MAXSCORE 150
#define STUDENTSIZE 100
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
int Partition(student s[], int low, int high);
void quickSort(student stu[],int low,int high); //快速排序 n * log n
void bucketSorting(student s[],int n);//桶排序 n
void bubbleSort(student s[],int n);//冒泡排序 n^2
void selectSort(student s[],int n);//选择排序 n^2
void insertSort(student s[],int n);//插入排序 n^2
void traverse(student s[],int n);//遍历
#endif //PROJ2_STUDENT_H
