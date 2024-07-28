//Sorting 0's and 1's

#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int size;
    cout << "Enter the size of the array:: ";
    cin >> size;

    cout << "Please enter only '0' & '1' as the element.\n\n";

    cout << "Enter the elements of the array:: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The array look like:: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int s = 0, e = size - 1;

    while (s <= e)
    {

        if (arr[s] == 1 && arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }

        else if (arr[s] == 0)
        {
            s++;
        }
        else
            e--;
    }

    cout << "\nAfter sorting, the array look like:: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}