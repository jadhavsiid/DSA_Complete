#include <iostream>
using namespace std;

// Sorting in ascending order
void bubble_sort(int a[], int n)
{

    for (int time = 1; time <= n - 1; time++)
    {
        // for repeatative iterations
        for (int j = 0; j <= n - time - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    bubble_sort(arr, n);

    // printing op
    for (auto i : arr)
    {
        cout << i << ",";
    }
}
