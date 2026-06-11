# Experiment 11 — Binary Search Algorithm

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program to implement the Binary Search algorithm recursively.

## 2. Theory
Binary Search is an efficient algorithm that finds a target value in a **sorted array**. It works by repeatedly dividing the search interval in half. It compares the target value to the middle element of the array:

1. If they are equal, the search is successful.
2. If the target is smaller, the search continues in the left half.
3. If the target is larger, the search continues in the right half.

This process repeats until the target is found or the interval is empty.

## 3. Implementation Code

```cpp
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
```

## 4. Expected Output

```text
Element is present at index 3
```

## 5. Viva / Discussion Questions
1. **Prerequisite:** What is the fundamental prerequisite for Binary Search?
2. **Search Comparison:** Compare the time complexity of Linear Search and Binary Search.
3. **Midpoint Calculation:** Why is the middle index calculated as l + (r - l) / 2 instead of (l + r) / 2?
4. **List Compatibility:** Can Binary Search be applied efficiently on a singly linked list? Why or why not?
5. **Comparisons Limit:** What is the maximum number of comparisons required to search in an array of size N?

---

[Back to Main Index](../README.md)
