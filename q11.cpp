#include <iostream>
using namespace std;

void oddOReven(int num){
    if(num & 1 == 1) cout<<"Given number is odd.";
    else cout<<"Given number is even.";
}

int main(){
    int num;
    cout<<"Enter the number to check for odd or even:: ";
    cin>>num;
    cout<<endl<<"Here's the result.\n";
    oddOReven(num);   
}