//
// Created by 70929 on 2021/12/14.
//

#include "Student.h"

void swap(student &stu1,student &stu2)
{
    student temp = stu1;
    stu1 = stu2;
    stu2 = temp;
}

void addStudent(int n,student &s,student *a[])
{
    a[n]->name = s.name;
    a[n]->score = s.score;
}

int Partition(student s[], int low, int high)
{
    while(low<high)
    {
        while(low<high && s[low].score <= s[high].score)
            high--;
        swap(s[low], s[high]);
        while(low<high && s[low].score <= s[high].score)
            low++;
        swap(s[low], s[high]);
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

void bucketSorting(student s[],int n)
{
    int bucket[MAXSCORE][100];
    int count[MAXSCORE];
    memset(count,0,sizeof(count));
    int cnt = 0;
    student t[STUDENTSIZE];
    for(int i = 0;i<n;i++)
        bucket[s[i].score][count[s[i].score]++] = i;
    for(int i = 0;i<MAXSCORE;i++)
        for(int j = 0;j<count[i];j++)
            t[cnt++] = s[bucket[i][count[j]]];
    for(int i =0;i<n;i++)
        swap(s[i],t[i]);
}

void bubbleSort(student s[],int n)
{
    for (int i = 0;i<n;i++)
        for (int j = i;j<n;j++)
            if(s[i].score >s[j].score)
                swap(s[i],s[j]);
}

void selectSort(student s[],int n)
{
    int index,minValue;
    for (int i = 0;i<n;i++)
    {
        minValue = 10e5;
        for (int j = i; j < n; j++)
            if(minValue > s[j].score)
            {
                index = j;
                minValue = s[j].score;
            }
        swap(s[i],s[index]);
    }
}

void insertSort(student s[],int n)
{
    for (int i=0; i<n; i++)
    {
        auto e = s[i];
        int index=i;
        while (index > 0 && s[index - 1].score > e.score)
        {
            s[index] = s[index - 1];
            index--;
        }
        s[index] = e;
    }
}

void traverse(student s[],int n)
{
    for(int i =0;i<n;i++)
        cout<<s[i].name<<"\t"<<s[i].score<<endl;
}