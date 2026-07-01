#include <iostream>
using namespace std;

// Problem: Remove Duplicates from a Sorted Array
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    cout << "Array after removing duplicates: ";

    for (int k = 0; k <= i; k++)
    {
        cout << arr[k] << " ";
    }

    cout << endl;

    cout << "Number of unique elements = " << i + 1 << endl;

    return 0;
}