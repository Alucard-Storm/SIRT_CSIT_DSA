# Experiment 10 — Bubble Sort Algorithm | Notes

---

## Concept Explanation

Think of bubble sort like **bubbles in a soft drink** or heavy elements sinking. If you have a line of children of different heights, you compare the first two. If the first is taller than the second, they swap. You repeat this for the second and third, and so on. By the time you reach the end, the tallest child is guaranteed to be at the very back of the line.

---

## Code Snippets

### Bubble Sort Implementation
```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
```

---

## Key Points to Remember
- Bubble Sort is stable (maintains relative order of equal keys) and in-place (uses O(1) auxiliary space).
- In each outer pass, the largest unsorted element is placed in its final sorted position at the end.
- Worst-case and average-case time complexity is O(N^2).
- To optimize, we can use a boolean flag `swapped`. If no swaps occur in an entire pass, the array is sorted, and we break early (O(N) best case).

---

## Quick Reference Table

| Case | Time Complexity | Condition |
| ---- | --------------- | --------- |
| Best Case (Optimized) | O(N) | Array is already sorted |
| Worst Case | O(N^2) | Array is sorted in reverse order |
| Average Case | O(N^2) | Array elements are randomly distributed |

