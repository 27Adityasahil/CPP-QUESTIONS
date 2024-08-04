// square root using binary search

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number to find its square root:: ";
    cin >> number;

    int result = 0;

    int s = 0, e = number, mid = s + (e - s) / 2;

    while (s <= e)
    {
        if ((mid * mid) == number)
        {
            result = mid;
            break;
        }
        else if ((mid * mid) < number)
        {
            result = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    cout << "The result is:: " << result;
}