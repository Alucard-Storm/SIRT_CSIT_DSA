// Aim: Write a program to implement Bubble Sort
// Bubble Sort repeatedly steps through the list, compares adjacent elements
// and swaps them if they are in the wrong order

#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
// arr[] is the array to be sorted
// n is the size of the array
void bubbleSort(int arr[], int n)
{
    int i, j;
    // Outer loop runs n-1 times since after each iteration
    // one element gets fixed at its correct position
    for (i = 0; i < n - 1; i++)

    // Inner loop compares adjacent elements and swaps if needed
    // Last i elements are already sorted, so we don't check them
    for (j = 0; j < n - i - 1; j++)
    {
        // Compare adjacent elements
        if (arr[j] > arr[j + 1])
        {
            // Swap if element found is greater than next element
            swap(arr[j], arr[j + 1]);
        }
    }
}

// Function to print an array 
// arr[] is the array to be printed
// size is the number of elements
void printArray(int arr[], int size)
{
    int i;
    // Loop through array and print each element
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function - entry point of program
int main()
{
    // Initialize array with unsorted elements
    int arr[] = { 5, 1, 4, 2, 8};
    // Calculate size of array
    int N = sizeof(arr) / sizeof(arr[0]);
    // Call bubble sort function to sort array
    bubbleSort(arr, N);
    // Print the sorted array
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}
