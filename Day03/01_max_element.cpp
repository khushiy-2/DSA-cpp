#include <iostream>
using namespace std;

// Problem: Find the Maximum Element in an Array
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    int i;
    int arr[] = {3, 8, 2, 10, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > largest){
          largest = arr[i];
        }
    }
     cout << "Largest element is: " << largest << endl;

    return 0;
}