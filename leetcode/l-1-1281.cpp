// subtract the products and sum of digits of an integer

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number:: ";
    cin>>num;

    int rem = 0, prod = 1, sum = 0;
    while(num != 0){
        rem = num % 10;
        prod *= rem;
        sum += rem;
        num /= 10;
    }
    cout<<"The difference between the product of the digit and sum of the digit is:: "<<prod - sum<<"."<<endl;
}