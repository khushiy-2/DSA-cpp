#include <iostream>
using namespace std;

// Problem: Reverse an Array
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[] = {3, 8, 2, 10, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        // Swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers
        start++;
        end--;
    }

    cout << "Reversed Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}