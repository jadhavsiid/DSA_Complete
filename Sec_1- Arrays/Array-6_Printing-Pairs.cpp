#include <iostream>
using namespace std;

void print_pairs(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int x = arr[i];

        for (int j = 0; j < n; j++)
        {
            int y = arr[j];

            cout << " ( " << x << " , " << y << " )" << '\t';
        }

        cout << '\n';
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(int);

    print_pairs(arr, n);

    return 0;
}