#include<iostream>
using namespace std;

int nthTerm(int num){
    int ap = 3 * num + 7;
    return ap;
}

int main(){
    int num;
    cout<<"Enter the required limit of progression:: ";
    cin>>num;

    int result = nthTerm(num);
    cout<<"\nThe "<<num<<"th term of the ap => '3 * n + 7' is:: "<<result;
    return 0;
}