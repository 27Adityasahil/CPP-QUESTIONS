// PROGRAMMING A CALCULATOR

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char ch;

    cout << "This is a calculator which deals with 2 input.";
    cout << endl
         << "Enter the numbers:: ";
    cin >> num1 >> num2;

    cout << "Enter the required operation('+', '-', '*', '/', '%') to be performed:: ";
    cin >> ch;
    cout<<endl;

    switch (ch)
    {
    case '+':
        cout << "You have chosen -> '+' this operation.\nAnd the result is:: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "You have chosen -> '-' this operation.\nAnd the result is:: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "You have chosen -> '*' this operation.\nAnd the result is:: " << num1 * num2 << endl;
        break;
    case '/':
        cout << "You have chosen -> '/' this operation.\nAnd the result is:: " << num1 / num2 << endl;
        break;
    case '%':
        cout << "You have chosen -> '%' this operation.\nAnd the result is:: " << num1 % num2 << endl;
        break;
    default:
        cout << "You have chosen some different operation.";
    }
    cout<<endl<<"Thanks for using.";
    return 0;
}