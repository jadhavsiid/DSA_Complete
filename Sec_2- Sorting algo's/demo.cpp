#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40};

    // Range based for loop
    /* for (auto range_declaration, range expression){
        loop body
    } */

    for (auto x : arr)
    {
        cout << x << '\n';
    }
}