// nth fibonacii number

#include <iostream>
using namespace std;

int fibo(int num){
    int prev = 0, current = 1, sum = 0;
    for(int i = 1; i < num; i++){
        sum = prev + current;
        prev = current;
        current = sum;
    }
    return sum;
}

int main(){
    int num;
    cout<<"enter the number:: ";
    cin>>num;

    int res = fibo(num);
    cout<<res;
}