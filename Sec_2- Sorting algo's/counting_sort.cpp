#include <iostream>
#include <vector>
using namespace std;

void counting_sort(vector<int> &a, int n)
{
    // finding largest element
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, a[i]);
    }

    // create a count vector
    vector<int> freq(largest + 1, 0);

    // update the frequency
    for (auto x : a)
    {
        freq[x]++;
    }

    // put back the elements from frequency into original array

    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
}
int main()
{
    vector<int> arr = {5, 8, 3, 1, 1, 2, 6};
    int n = arr.size();

    counting_sort(arr, n);
    cout << "Sorted array is: ";

    for (auto i : arr)
    {
        cout << i << " , ";
    }
}