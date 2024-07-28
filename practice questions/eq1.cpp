#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to convert:: ";
    cin>>num;
    int num1 = num;

    int ans = 0, bit, i = 0;
    while(num != 0){
        bit = num & 1;
        ans = bit * pow(10, i) + ans;
        num >>= 1;
        i++;
    }
    cout<<"The result is:: "<<ans<<"."<<endl;

    // calculating the 1's complement
    int digit = 0;
    int str = ans;
    while(str != 0){
        if(str & 1 == 0) digit = digit * 10;
    }
}