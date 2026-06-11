# Experiment 09 — Operations on Singly Linked List | Notes

---

## Concept Explanation

Think of reversing a linked list like **reversing a train**. Instead of each train car pointing to the car behind it, you have to decouple each connection and repoint it to the car that was previously in front of it, starting from the original engine (which becomes the caboose).

---

## Code Snippets

### Reversing the List
```cpp
void reverse() {
    node *prev = NULL, *current = start, *next = NULL;
    while (current != NULL) {
        next = current->link;    // Store next
        current->link = prev;    // Reverse pointer
        prev = current;          // Move pointers one step forward
        current = next;
    }
    start = prev;
}
```

---

## Key Points to Remember
- Reversing a singly linked list requires keeping track of the previous, current, and next nodes to prevent losing references.
- Sorting nodes by swapping data is simpler but less efficient for large data objects than swapping pointers.
- Aggregation (sum, count, max) requires a complete O(N) traversal of the list.
- Using global pointers like `start` simplifies function signatures but couples the logic to a single list instance.

---

## Quick Reference Table

| Operation | Time Complexity | Auxiliary Space |
| --------- | --------------- | --------------- |
| Reversal | O(N) | O(1) |
| Sorting (Bubble) | O(N^2) | O(1) |
| Find Max / Mean | O(N) | O(1) |
| Insert/Delete at Pos | O(N) | O(1) |

