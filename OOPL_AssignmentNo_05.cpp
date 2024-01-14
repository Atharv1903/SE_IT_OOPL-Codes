#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <class T>
void selectionsort(T *a, int size)
{
    int min;
    for (int i = 0; i < (size - 1); i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            T temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main()
{

    int n, n1;
    cout << "Enter the number of elements :";
    cin >> n;
    cout << "Enter float value numbers : " << endl;

    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionsort(arr, n);
    cout << "Sorted array is :  ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Enter the number of elements :";
    cin >> n1;
    cout << "Enter int value numbers : " << endl;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    selectionsort(arr1, n1);
    cout << "Sorted array is :  ";
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}