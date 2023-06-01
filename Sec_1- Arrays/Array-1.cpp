// Lecture-1: Array- Input, Output, Update
#include<iostream>
using namespace std;
int main(){
    int marks[100] = {0};
    int n;
    cout<<"Enter no. of Students: ";
    cin>>n;
    cout <<'\n';
    
    // For Input
    for (int i = 0; i < n ; i++)
    {
        cin>>marks[i];
 
    }

    // For Output
    for (int i = 0; i < n ; i++)
    {
     cout <<'\t';
     cout<<marks[i]<<'\t';
    }
    
    return 0;
}
