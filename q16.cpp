#include<iostream>
using namespace std;

int main(){
    // print sum of all elements of array
    int demo[100];
    int size;
    cout<<"Enter the size of the array:: ";
    cin>>size;

    for(int i = 0; i < size; i++){
        cin>>demo[i];
    }
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum+=demo[i];
    }
    cout<<sum;
}