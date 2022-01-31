#include "student.h"

int main()
{
    Stu stu;
    int key;
    while(true)
    {
        cout<<"----------------------"<<endl;
        cout<<"1.Enter stuedent information."<<endl;
        cout<<"2.Insert sort"<<endl;
        cout<<"3.Bubble sort"<<endl;
        cout<<"4.Quick sort."<<endl;
        cout<<"5.Selection sorting."<<endl;
        cout<<"6.Heap sort."<<endl;
        cout<<"7.Merge sort."<<endl;
        cout<<"8.Output student information"<<endl;
        cout<<"9.Exit"<<endl;
        cout<<"----------------------"<<endl;
        scanf_s("%d",&key);

        switch(key)
        {
            case 1:
                cout<<"Input how many student to create"<<endl;

                break;
            case 2:
                InsertSort(stu);
                break;
            case 3:
                BubbleSort(stu);
                break;
            case 4:
                QuickSort(stu,1,n);
                Display(stu);
                break;
            case 5:
                SelectionSort(stu);
                break;
            case 6:
                HeapSort(stu);
                break;
            case 7:
                MergeSort(stu,1,n);
                Display(stu);
                break;
            case 8:
                Display(stu);
                break;
            default:
                return 0;
        }
    }
}