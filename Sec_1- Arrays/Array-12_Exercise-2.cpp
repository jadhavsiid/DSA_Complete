#include <iostream>
#include <vector>
using namespace std;

int largestSubarraySum(vector<int> arr)
{

    int current_sum = 0;
    int largest_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        current_sum = current_sum + arr[i];

        if (current_sum < 0)
        {
            current_sum = 0;
        }
        else
        {
            largest_sum = max(current_sum, largest_sum);
        }
    }

    return largest_sum;
}

int main()
{
    // vector<int> arr = {1, -2, 3, 4, 4, -2};
    vector<int> arr = {5, 0, -1, 0, 1, 2, -1};

    cout << "The largest Subarray Sum is: " << largestSubarraySum(arr);
}