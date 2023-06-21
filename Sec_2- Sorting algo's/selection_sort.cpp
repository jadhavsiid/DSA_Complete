#include<iostream>
#include<vector>
using namespace std;

void selection_sort( vector <int> &a, int n){
    
    for (int pos = 0; pos <= n-2; pos++)
    {
        int current_element = a[pos]; // variable used to assign 'value' of element on a current position.
        int min_element_pos = pos; // variable used assign 'positon' of minimum element.

    // loop to find minimum element
        for (int j = pos; j < n; j++)
        {
            if (a[j] < a[min_element_pos])
            {
                min_element_pos = j; // store position of that element who's smaller than the minimum element declared above
            }

        }
        swap(a[min_element_pos], a[pos]); // swapping 'element' at minimum position with 'element' at current position.
                    
    }
    
}
int main(){
    vector <int> arr = { 5, 4, 1, 2, 3};
    int n = arr.size();

    selection_sort(arr, n);

    for( auto x: arr){
        cout<< x << ",";
    }

}