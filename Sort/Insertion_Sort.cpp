// Insertion_Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>


using namespace std;

void InsertionSort(int element[],int n)
{
    int i, key, j;
    for (i = 1; i < n ; i++)
    {
        key = element[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
            greater than key, to one position ahead
            of their current position */
        while (j >= 0 && element[j] > key)
        {
            element[j + 1] = element [j];
            j = j - 1;
        }
        element[j + 1] = key;
    }

}
void printArray(int element[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << element[i] << " ";
    }
}
int main()
{
    int arr[] = { 2,4,6,9,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, n);
    printArray(arr, n);

}

