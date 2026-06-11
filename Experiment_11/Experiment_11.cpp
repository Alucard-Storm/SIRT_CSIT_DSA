// Aim: Write a program implement binary search
// Binary search is an efficient algorithm that finds a target value in a sorted array
// It works by repeatedly dividing the search interval in half

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function that searches for element x in array arr[l..r]
// Parameters:
// arr[] - sorted array to search in
// l - left index of current subarray
// r - right index of current subarray  
// x - value to search for
// Returns index if found, -1 if not found
int binarySearch(int arr[], int l, int r, int x)
{
    // Base case - only search if right index >= left index
    if(r >= l)
    {
        // Calculate middle index avoiding overflow
        int mid = l + (r - l) / 2;

        // If element found at middle, return its index
        if (arr[mid] == x)
            return mid;

        // If middle element is greater than x,
        // search in left half by recursively calling with updated right boundary
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // If middle element is less than x,
        // search in right half by recursively calling with updated left boundary
        return binarySearch(arr, mid + 1, r, x);
    }
    
    // Element not found in array
    return -1;
}
    
int main(void)
{
    // Initialize sorted test array
    int arr[] = { 2, 3, 4, 10, 40 };
    
    // Value to search for
    int x = 10;
    
    // Calculate array size
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Call binary search and store result
    int result = binarySearch(arr, 0, n - 1, x);
    
    // Print appropriate message based on whether element was found
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
