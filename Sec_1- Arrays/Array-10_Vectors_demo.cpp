// Vectors Demo

#include<iostream>
#include<vector> // necessary header file while using vectors
using namespace std;

int main(){

    // Creating a vector
    vector<int> vect = {1, 2, 3, 12, 15};
    // How to remove lst element from a existing vector
    vect.pop_back();
    
    // How to insert element inside a existing vector
    vect.push_back(16);
    
    // To see how many elements are inside a vector
    cout<< vect.size()<< '\n';

    // To see capacity of a vector
    cout<< vect.capacity()<< '\n';
    //  capacity is nothing but the memory acquired by an vector

    // printing all the elements of a vector
    for (int i = 0; i < vect.size(); i++)
    {
        cout<<vect[i]<<',';
 
    }
    cout<<'\n';

    //  Fill Constructors in vectors

    vector <int> vect1(5,2);

    for (int j = 0; j < vect1.size(); j++)
    {
        cout << vect1[j]<< ',';
    }
    
    




}