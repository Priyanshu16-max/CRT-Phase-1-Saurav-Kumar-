// Array :- Array is a collection of similar data items stored at contiguous memory locations.
// It is a data structure that can hold a fixed number of values of the same type. 
//The elements of an array are stored in contiguous memory locations, which allows for efficient access and manipulation.

// Size of(arr) / Size of(datatype)     // int :- 2 bytes , char :- 1 byte , float :- 4 bytes , double :- 8 bytes

// 2D Array :- A 2D array is an array of arrays. 
// It is a collection of similar data items stored in a tabular form, where each element is accessed using two indices (row and column).

#include <iostream>
using namespace std;

int main()
{
    int arr[5]; //= {1, 2, 3, 4, 5};
    // Manual input of array elements using cin
    // cin >> arr[0];
    // cin >> arr[1];
    // cin >> arr[2];
    // cin >> arr[3];
    // cin >> arr[4];

    // Direct Accessing of array elements using index and printing them using
    // cout << arr[0] << endl;

    // UserInput of array elements using loop

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}