#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cin >> num;

    char ch;
    cin>>ch;
    int c100 = 0, c50 = 0, c20 = 0, c1 = 0;
    switch (ch)
    {
    case 'h':
        c100 = num / 100;
        num = num % 100;
    case 'f':
        c50 = num / 50;
        num = num % 50;
    case 't':
        c20 = num / 20;
        num = num % 20;
    case 'd':
        c1 = num / 1;
        num = num % 1;
    }

    cout <<"100 : "<<c100<<endl;
    cout <<"50 : "<<c50<<endl;
    cout <<"20 : "<<c20<<endl;
    cout <<"1 : "<<c1<<endl;
}