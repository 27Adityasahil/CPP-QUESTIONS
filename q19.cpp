// swapping alternate elements of the array

#include <iostream>
using namespace std;

int main()
{
    int demo[50];
    int size;
    cout << "Enter the size of the array:: ";
    cin >> size;

    cout << "Enter the elements of the array:: ";

    for (int i = 0; i < size; i++)
    {
        cin >> demo[i];
    }

    cout << endl;

    cout << "The elements of the array you have entered is:: ";
    for (int i = 0; i < size; i++)
    {
        cout << demo[i] << " ";
    }

    cout << endl
         << endl;
    // swapping the alternate elements of the array
    int i = 0;
    while (i < size)
    {

        if (i + 1 < size)
            swap(demo[i], demo[i + 1]);
        i += 2;
    }
    cout << "After swapping the alternate elements of the array, the array looks like:: ";
    for (int i = 0; i < size; i++)
    {
        cout << demo[i] << " ";
    }
}