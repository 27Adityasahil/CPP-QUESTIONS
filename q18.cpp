#include <iostream>
using namespace std;

void rev(int arr[], int size){
    int s = 0, e = size - 1;
    while(s <= e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void printarray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10];
    int size;
    cout<<"Enter the size of the array:: ";
    cin>>size;

    cout<<"Enter the elements of the array:: ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"The original array is:: \n";
    printarray(arr, size);

    cout<<endl;

    rev(arr, size);
    cout<<"The reversed array is:: \n";
    printarray(arr, size);

    return 0;    
}