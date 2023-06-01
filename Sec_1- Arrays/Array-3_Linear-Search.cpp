//  Searching in Arrays

//  Linear Search: Searching Algorithm to find the index of element in a given Array. (Brute Force Technique)

#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int j;
    for (int j = 1; j <= 3; j++)
    {
        int arr[] = {10, 15, 12, 9, 6, 4, 3, 13, 8};
        int n = sizeof(arr) / sizeof(int);

        int key;
        cin >> key;

        int index = linear_search(arr, n, key);
        if (index != -1)
        {
            cout << key << " is present at index " << index << '\n';
        }
        else
        {
          cout << "Key not Found !!"<<'\n';
        }
    } 
}