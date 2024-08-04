// Search in a sorted rotated array

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

int binarySearch(int arr[], int size, int target){
    int s = 0, e = size - 1, mid;
    int temp = pivot(arr, size);
    if((arr[temp] <= target)&&(target <= arr[size - 1])) s = temp;
    else e = temp;
    mid = s + (e - s) / 2;

    while(s <= e){
        if(target == arr[mid]) return mid;
        else if(target < arr[mid]) e = mid - 1;
        else s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main(){
    int arr[20];
    int size;
    cout<<"Enter the size of the array:: ";
    cin>>size;

    cout<<"enter the elements of the array:: \n";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"Array should look like:: \n";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    int target;
    cout<<"\nenter the element to search for:: ";
    cin>>target;

    int result = binarySearch(arr, size, target);

    cout<<"\nThe result is :: "<< result;

}