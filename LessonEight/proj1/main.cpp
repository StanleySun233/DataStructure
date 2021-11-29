#include <iostream>
#include "student.h"


int main()
{
    Stu stu;
    int key;
    while(true)
    {
        printf("    ----------------------\n");
        printf("    1.录入学生基本信息。\n");
        printf("    2.直接插入排序。\n");
        printf("    3.冒泡排序。\n");
        printf("    4.快速排序。\n");
        printf("    5.简单选择排序。\n");
        printf("    6.堆排序。\n");
        printf("    7.2-路归并排序。\n");
        printf("    8.输出学生信息。\n");
        printf("    9.退出。\n");
        printf("    ----------------------\n");
        scanf_s("%d",&key);

        switch(key)
        {
            case 1:
                Build(stu);
                break;
            case 2:
                InsertSort(stu);
                break;
            case 3:
                BubbleSort(stu);
                break;
            case 4:
                ReadFile(stu);
                QuickSort(stu,1,n);
                Display(stu);
                break;
            case 5:
                SeletionSort(stu);
                break;
            case 6:
                HeapSort(stu);
                break;
            case 7:
                ReadFile(stu);
                MergeSort(stu,1,n);
                Display(stu);
                break;
            case 8:
                ReadFile(stu);
                Display(stu);
                break;
            default:
                return 0;
        }
    }
}