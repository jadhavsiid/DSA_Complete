#include<iostream>
#include<algorithm>
using namespace std;

// Function for deciding the order of sort
bool compare( int a, int b){
    return a>b;
}

int main(){
    int arr[] = { 18, 16, 12, 10, 8, 2, 9, 15, 20};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr + n, compare); // here we do not call compare function instead we pass it inside a function

    for( auto x : arr){
        cout<< x << " , "; 
    }

    // OR

    //     int arr[] = { 18, 16, 12, 10, 8, 2, 9, 15, 20};
    // int n = sizeof(arr)/sizeof(int);

    // sort(arr, arr + n, greater<int>()); // Only to sort in decending order

    // for( auto x : arr){
    //     cout<< x << " , "; 
    // }

}