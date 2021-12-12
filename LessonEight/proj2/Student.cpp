//
// Created by 70929 on 2021/12/14.
//

#include "Student.h"

void swap(student &stu1,student &stu2)
{
    student temp = stu1;
    stu1 = stu2;
    stu2 = stu1;
}

void addStudent(int n,student &s,student *a[])
{
    a[n]->name = s.name;
    a[n]->score = s.score;
}

int Partition(student stu[],int low,int high)
{
    while(low<high)
    {
        while(low<high && stu[low].score<= stu[high].score)
            high--;
        auto sc = stu[low];
        stu[low] = stu[high];
        stu[high] = sc;
        while(low<high && stu[low].score <= stu[high].score)
            low++;
        sc = stu[low];
        stu[low] = stu[high];
        stu[high] = sc;
    }
    return low;
}

void quickSort(student stu[],int low,int high)
{
    int index;
    if(low<high)
    {
        index=Partition(stu, low, high);
        quickSort(stu, low, index - 1);
        quickSort(stu, index + 1, high);
    }
}

void traverse(student s[],int n)
{
    for(int i =0;i<n;i++)
        cout<<s[i].name<<"\t"<<s[i].score<<endl;
}