// Exercise-1: Implement a function that takes vector of integers as input and returns the largest element.
#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int> arr) {
    
     int largest_element= arr[0];
     
     for(int i = 1; i < arr.size(); i++)
     {
        if(arr[i] > largest_element)
        {
            largest_element = arr[i];
         }
     }
     return largest_element;
}

int main(){
    
    vector <int> arr = { -3, 4, 1, 2, 3};
    cout<<"The Largest Element of an given vector is: "<<largestElement(arr);
    cout<<'\n';
    cout<< arr.size();
}
