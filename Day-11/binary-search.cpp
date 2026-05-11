#include<iostream>
using namespace std;

int BinarySearch(int nums[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = start + (end - start) / 2; // To avoid overflow

        if(nums[mid] == target){
            return mid;
        } else if(nums[mid] < target){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // Target not found
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    // Searching for the target using binary search
    int result = BinarySearch(arr, size, target);

    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}