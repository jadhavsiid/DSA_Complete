#include<iostream>
using namespace std;

void array_rev(int arr[], int n){
     
     int s = 0;
     int e = n-1;
     
     while (s <= e)
     {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
     }
}

int main(){
     int arr[] = {10, 20, 43, 52, 67, 78};
     int n = sizeof(arr)/sizeof(int);

    //  Printing original array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<'\t';
    }
    cout<<'\n';

    array_rev(arr,n);


    // Printing reversed array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<'\t';
    }
    cout<<"\n";
}