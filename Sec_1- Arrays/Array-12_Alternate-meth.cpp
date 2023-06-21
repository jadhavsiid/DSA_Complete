// Alternate method for printing largest subarray sum of an Array
// Suppose your vector has all elements as negative then this method can be followed to print largest subarray sum.
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int largestSubarraysum( vector <int> arr){
// Code to check whether all elements of an array is negative
    bool allNeg = true;
    int largest = INT_MIN;

    for( int x : arr)
    {
        if (x > 0)
        {
            allNeg = false;
        }
    largest = max (largest, x);
    }

    if(allNeg)
    {
        return largest;
    }
// Old school Kadane's algorithm
    int cs = 0;
    int ls = 0;
    for (int i = 0; i < arr.size() ; i++)
    {
        ls = cs + arr[i];

        if (cs > 0)
        {
            cs = 0;
        }
        else{
            ls = max (cs, ls);
        }
           
    }
    return ls;
}

int main(){
    
    vector <int> arr = { -3, -2, -6, -7, -4};
    cout<< "The Largest sum of subarray of a given array is: "<< largestSubarraysum(arr); 
}

/* Note: When all elements of an array is negative, the largest subarray sum would be the largest element of that array*/