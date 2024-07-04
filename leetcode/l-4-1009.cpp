#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int num;
    // number must be in base 10 ( decimal )

    cout<<"Enter the number to change:: ";
    cin>>num;

    int bit, ans = 0, i = 0;

    while(num != 0){
        bit = num & 1;
        num >>= 1;
        ans = ans * pow(10, i) + bit;
        i++;
    }
    cout<<ans;
}