#include<iostream>
#include<algorithm> //Necessary header file to use inbuilt sort function in c++
using namespace std;

int main(){
    int arr[] = { 18, 16, 12, 10, 8, 2, 9, 15, 20};
    int n = sizeof(arr)/sizeof(int);

// syntax: sort( name of an array, starting index + one index after of ending index)
    sort( arr, arr + n );
    cout<< "This is sorted array: ";
    for( auto x : arr){

        cout<< x << " , ";
    }

    cout << '\n';
    // To Reverse above sorting 
    reverse ( arr, arr + n);
    cout<< "This is reverse sorting of that same array: ";

    for ( auto i : arr){
        cout<< i <<" , ";
    }
}