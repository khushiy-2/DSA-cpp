#include <iostream>
using namespace std;

// Problem: Move All Zeroes to the End
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[] = {0, 1, 0, 3, 12};

    int n = sizeof(arr) / sizeof(arr[0]);

    int index = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill the remaining positions with zeros
    while (index < n)
    {
        arr[index] = 0;
        index++;
    }

    cout << "Array after moving zeroes: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}