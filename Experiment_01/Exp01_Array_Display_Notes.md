# Experiment 01 — Array Initialization and Display | Notes

---

## Concept Explanation

Think of an array like a **row of numbered lockers** at a school. Every locker is the exact same size, and they are arranged side-by-side in a single row. The lockers are numbered starting from 0. Each locker holds exactly one item of the same type.

---

## Code Snippets

### Array Declaration & Initialization
```cpp
int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
// Creates a block of 10 integers in memory
```

### Array Traversal
```cpp
for(int i = 0; i < 10; i++) {
    cout << arr[i] << " "; // Accessing element at index i
}
```

---

## Key Points to Remember
- Static allocation: Size is fixed and cannot be changed during runtime.
- Contiguous memory: Elements are stored next to each other, allowing O(1) random access.
- Homogeneous elements: All elements must be of the same data type.
- 0-based indexing: The first element is at index 0, and the last is at index size-1.

---

## Quick Reference Table

| Operation | Time Complexity | Description |
| --------- | --------------- | ----------- |
| Access by Index | O(1) | Direct computation of memory address |
| Search (Linear) | O(N) | Checking elements one by one |
| Traversal | O(N) | Visiting all elements in the array |

