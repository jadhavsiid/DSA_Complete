/* In simple bubble sort algorithm, the time complexity will remain O(n^2) every time, even if the given array is already sorted.
Your task is to optimized the bubble sort such that its best case time complexity becomes O(n).

Input Format

In the function an integer vector is passed.

Output Format

Return an integer vector in non decreasing order. */

#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector <int> a[], int n)
{
    bool swapped;

    for (int time = 0; time <= n-1; time++)
    {
        swapped = false;
        for (int j = 0; j <= n - time -1; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                swapped = true;
            }
            
        }

        if (!swapped)
        {
            break;
        }
        
        

    }
    
}

int main()
{

    vector <int> arr = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = arr.size();

    bubble_sort(arr,n);

    // printing op
    for (auto i : arr)
    {
        cout << i << ",";
    }
}
