#include<iostream>

using namespace std;

// int main(){
//     int num;
//     cout<<"Enter the number to check if it is power of two:: ";
//     cin>>num;

//     int even;

//     while(num > 0){
//         even = num & (num - 1);
//         // cout<<even<<endl;
//         num<<=1;
        
//     }
//     if (even == 0) cout<<"It is power of two.";
//     else cout<<"No, it is not power of two.";

//     return 0;
// }

bool isPower(int n){
    return (n > 0 && (n & (n - 1))) == 0;
}

int main(){
    int num;
    cin>>num;

    cout<<"\nIf it is power of two, the answer will be '1' else '0'.\n";
    cout<<"Answer is:: "<<isPower(num)<<endl;
}