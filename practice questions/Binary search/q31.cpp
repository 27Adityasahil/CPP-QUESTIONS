// Find pivot in an array:: 

#include <iostream>
using namespace std;

int pivot(int arr[], int size){
    int s = 0, e = size - 1, mid = s + (e - s) / 2;
    while(s < e){
        if(arr[mid] >= arr[0]) s = mid + 1;
        else e = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(){
    int arr[20];

    int size;
    cout<<"Enter the size of the array:: ";
    cin>>size;

    cout<<"Enter the elements of the array:: \n";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"Array should look like:: \n";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int result = pivot(arr, size);
    cout<<"Pivot is at index:: "<<result;

}