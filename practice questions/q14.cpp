// total number of 1 bits in a and b

#include <iostream>
using namespace std;

int setBit(int num){
    int count = 0;
    while(num > 0 ){
        if(num & 1 == 1) count++;
        num>>=1;
    }
    return count;
}

int main(){
    int num1, num2;
    cout<<"Enter the numbers to count:: ";
    cin>>num1>>num2;

    cout<<setBit(num1)<<endl<<setBit(num2)<<endl;
    int ans = setBit(num1) + setBit(num2);
    cout<<endl;
    cout<<"Total number of set bit in num1 and num2 is:: "<<ans;
    return 0;
}