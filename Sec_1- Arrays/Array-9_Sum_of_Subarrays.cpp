//  Using Kadane's algorithm approach (Best Possible approach)
#include<iostream>
using namespace std;

int maximum_Subarray_Sum( int arr[], int n){

    int cs = 0;
    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        else{
            largest = max(largest, cs);
        }
    }
    return largest;
}

int main(){    
    //  Array Containing
     int arr[] = { -2, 3, 4, -1, 5, -12, 6, 1, 3};
     int n = sizeof(arr)/sizeof(int);

     cout<< maximum_Subarray_Sum (arr, n);

}