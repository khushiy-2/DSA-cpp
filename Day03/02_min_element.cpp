#include <iostream>
using namespace std;

// Problem: Find the Minimum Element in an Array
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    // Declare and initialize the array
    int arr[] = {3, 8, 2, 10, 5};

    // Find the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Assume the first element is the smallest
    int smallest = arr[0];

    // Traverse the array
    for (int i = 1; i < n; i++)
    {
        // If a smaller element is found
        if (arr[i] < smallest)
        {
            // Update the smallest element
            smallest = arr[i];
        }
    }

    // Display the result
    cout << "Smallest element is: " << smallest << endl;

    return 0;
}