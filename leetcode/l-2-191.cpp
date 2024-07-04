#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to count its 1 bit:: ";
    cin>>num;

    int bit, count = 0;
    int dup = num;

    while(num != 0){
        bit = num & 1;
        if(bit == 1){
            count += 1;
        }
        num = num >> 1;
    }
    cout<<"Total number of 1 bit in the number - "<<dup<<" is "<<count<<".";
}