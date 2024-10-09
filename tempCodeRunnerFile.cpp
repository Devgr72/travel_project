#include <iostream>
using namespace std;
int main() {
    int arr[] = {3, 5, 2, 8, 7, 1, 4, 12, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target, i, result = -1;
    cout << "Enter the number you want to search for: ";
    cin >> target;
    for (i = 0; i < size; ++i) 
    {     if (arr[i] == target)
           {          result = 1;
                       break;
           }     }
    if (result != -1)
        cout << "Element found at position " << i+1 << endl;
     else 
        cout << "Element not found in the array" << endl;
     return 0; }
