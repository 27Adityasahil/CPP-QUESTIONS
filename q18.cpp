#include <iostream>
using namespace std;

int main(){
    int demo[100];
    int size, temp;
    cout<<"Enter the size of the array:: ";
    cin>>size;

    for(int i = 0; i < size; i++){
        cin>>demo[i];
    }

    cout<<"The reversed array is:: "<<endl;
    int start = 0, end = size - 1;
    while(start <= end){
        temp = demo[start];
        demo[start] = demo[end];
        demo[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < size; i++){
        cout<<demo[i]<<" ";
    }
}
