#include <iostream>
using namespace std;

int main(){
    int num, sum = 0, start = 0, next = 1;
    cout<<"Till how many number you want the fibonacci to print:: ";
    cin>>num;

    int i = 1;
    cout<<"The fibonacci series you asked for is:: "<<endl<<start<<" "<<next<<" ";
    while(i <= num){
        sum = start + next;
        start = next;
        next = sum;
        i++;
        cout<<sum<<" ";
    }
    cout<<endl<<"Thanks for using!";
}