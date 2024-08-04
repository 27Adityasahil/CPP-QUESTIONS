#include <iostream>
#include <math.h>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int s = 0, e = size - 1, mid = s + (e - s) / 2;
    while(s <= e){
        if(key == arr[mid]){
            return mid;
        }

        if(key < arr[mid]){
            e = mid - 1;
        }
        else s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    // int num;
    // cin >> num;

    // char ch;
    // cin>>ch;
    // int c100 = 0, c50 = 0, c20 = 0, c1 = 0;
    // switch (ch)
    // {
    // case 'h':
    //     c100 = num / 100;
    //     num = num % 100;
    // case 'f':
    //     c50 = num / 50;
    //     num = num % 50;
    // case 't':
    //     c20 = num / 20;
    //     num = num % 20;
    // case 'd':
    //     c1 = num / 1;
    //     num = num % 1;
    // }

    // cout <<"100 : "<<c100<<endl;
    // cout <<"50 : "<<c50<<endl;
    // cout <<"20 : "<<c20<<endl;
    // cout <<"1 : "<<c1<<endl;

    // Binary search implementation

    int arr[20];
    int size;
    cout<<"Enter the size of the array:: ";
    cin>>size;

    cout<<"Enter the elements of the array:: ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"array looks like:: ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"Enter the key to search its index:: ";
    cin>>key;
    cout<<endl;
    cout<<"After searching the array, key is present at index:: "<<binarySearch(arr,size, key);
    return 0;
}