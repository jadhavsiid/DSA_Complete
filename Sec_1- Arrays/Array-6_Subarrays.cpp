#include<iostream>
using namespace std;

void Subarray (int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<< arr[k] << " , ";
            }
            cout<<'\n';
        }
        
    }
    
}

int main(){
    int arr[] = { 10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(int);

    Subarray(arr,n);
}