// mid = end+ start /2

// mid = start + (end - start) / 2


#include<iostream>
using namespace std;

int LinearSearch(int nums[], int n, int target)
{
    for(int i = 0; i < n; i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    // Searching for the target using linear search
    int result = LinearSearch(arr, size, target);

    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
