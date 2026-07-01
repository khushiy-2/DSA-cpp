#include <iostream>
using namespace std;

// Problem: Find the Sum of All Elements in an Array
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[] = {3, 8, 2, 10, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        
    }

    cout << "Sum of elements is: " << sum << endl;

    return 0;
}