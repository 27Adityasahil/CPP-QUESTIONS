#include <iostream>
using namespace std;

int main()
{
    int demo[100];
    int size, key;
    cout << "Enter the size of the array:: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> demo[i];
    }
    cout << endl
         << "Enter the element to search:: ";
    cin >> key;
    int pos = 0;

    for (int i = 0; i < size; i++)
    {
        if (key == demo[i])
        {
            pos = i + 1;
            cout << endl
                 << "The element is available to you at " << pos << "th position.";
            break;
        }
        else
        {
            cout << "\nElement is not found in the array.";
            break;
        }
    }
}