// Passing Array's to Functions
#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{

    cout << "In function " << sizeof(arr) << '\n';
    arr[0] = 100;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\n';
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr,n);
    cout << "In main " << sizeof(arr) << '\n';

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\n';
    }


    return 0;

}