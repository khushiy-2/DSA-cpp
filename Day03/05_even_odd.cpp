#include <iostream>
using namespace std;

// Problem: Count Even and Odd Numbers in an Array
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int arr[] = {3, 8, 2, 10, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Even Numbers = " << evenCount << endl;
    cout << "Odd Numbers = " << oddCount << endl;

    return 0;
}