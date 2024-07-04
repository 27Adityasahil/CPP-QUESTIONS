#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to be reversed:: ";
    cin>>num;

    int ans = 0, rem;
    while(num != 0){
        rem = num % 10;
        ans = ans * 10 + rem;
        num /= 10;
    }
    cout<<ans;
}