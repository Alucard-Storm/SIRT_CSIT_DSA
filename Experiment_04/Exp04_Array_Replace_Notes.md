# Experiment 04 — Replace Element in Array at Given Position | Notes

---

## Concept Explanation

Think of replacing an element like **swapping a book on a shelf**. If you want to replace the 3rd book on the shelf, you locate the 3rd slot (which is index 2, since we count slots starting from 0), take the old book out, and slide the new book in.

---

## Code Snippets

### Replacing Element at Position
```cpp
int pos, val;
cin >> pos >> val;
array[pos - 1] = val; // pos-1 maps to the correct 0-based index
```

---

## Key Points to Remember
- Replacement is an O(1) time complexity operation because we directly write to the memory address.
- Always subtract 1 from user-facing 1-based positions to get the correct 0-based index.
- No shifting of elements is required for replacement (unlike insertion or deletion).
- Boundary checks are crucial before writing to `array[pos - 1]`.

---

## Quick Reference Table

| Array Operation | Shifting Required? | Time Complexity |
| --------------- | ------------------ | --------------- |
| Replacement | No | O(1) |
| Insertion (General) | Yes (to make space) | O(N) |
| Deletion (General) | Yes (to close gap) | O(N) |

