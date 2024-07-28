// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

/*
Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
*/

#include <iostream>

using namespace std;

int main(){
    int arr[20];
    int size;
    cout<<"Enter the size of the array:: ";
    cin>>size;

    cout<<"Enter the elements of the array to :: \n";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    bool result;
    int ans = 0;
    for(int i = 0; i < size; i++){
        result = ans ^ arr[i];
    }

    cout<<result;
}