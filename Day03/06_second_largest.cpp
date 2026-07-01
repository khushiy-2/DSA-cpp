#include <iostream>
#include <climits>   // For INT_MIN

using namespace std;

// Problem: Find the Second Largest Element in an Array
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Largest Element = " << largest << endl;
    cout << "Second Largest Element = " << secondLargest << endl;

    return 0;
}