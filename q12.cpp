#include <iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for(int i = num; i >= 1; i--){
        fact *= i;
    }
    return fact;
}

int main(){
    int num1, num2;
    cout<<"Enter the number:: ";
    cin>>num1>>num2;

    int result1 = fact(num1), result2 = fact(num2);
    cout<<result1<<endl<<result2; 

    int nCr = fact(num1)/(fact(num2) * fact(num1 - num2));
    cout<<endl<<nCr<<"\nThanks for using.";
}