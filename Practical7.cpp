/*
Program 7:

Write a Program to implement binary search using recursion.
*/

#include <iostream>
#include <conio.h>
using namespace std;

void binarysearch(int arr[], int num, int first, int last)
{
    int mid;
    if (first > last)
        cout << "Element not found" << endl;
    else
    {
        mid = (first + last) / 2;
        if (arr[mid] == num)
        {
            cout << "Element is found at " << mid + 1;
        }
        else if (arr[mid] > num)
        {
            binarysearch(arr, num, first, mid - 1);
        }
        else
        {
            binarysearch(arr, num, mid + 1, last);
        }
    }
}

void sorting(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    cout << "the sorted array is" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int arr[50], beg, mid, end, e;
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    sorting(arr, size);
    beg = 0;
    end = size - 1;
    cout << "Enter the element to be searched" << endl;
    cin >> e;
    binarysearch(arr, e, beg, end);
    getch();
}
