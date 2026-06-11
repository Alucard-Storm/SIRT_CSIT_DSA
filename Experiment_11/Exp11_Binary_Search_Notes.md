# Experiment 11 — Binary Search Algorithm | Notes

---

## Concept Explanation

Think of Binary Search like **finding a word in a printed dictionary**. You don't start at page 1 and look at every word. Instead, you open the dictionary in the middle. If your word starts with a letter that comes after the middle page, you throw away the first half of the book and repeat the process on the remaining pages.

---

## Code Snippets

### Recursive Binary Search
```cpp
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
```

---

## Key Points to Remember
- Binary search utilizes the **Divide and Conquer** paradigm.
- Requires the container to be sorted and support random access in O(1) time.
- Time complexity is O(log N) because the search space is halved in each step.
- Calculating `mid = l + (r - l)/2` prevents integer overflow which can occur if `l + r` exceeds the maximum value of `int`.

---

## Quick Reference Table

| Algorithm | Time Complexity | Prerequisite |
| --------- | --------------- | ------------ |
| Linear Search | O(N) | None (works on unsorted/sorted lists) |
| Binary Search | O(log N) | List must be sorted, random access preferred |

