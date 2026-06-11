# Experiment 07 — Queue Implementation Using Array | Notes

---

## Concept Explanation

Think of a queue like a **line of customers waiting for movie tickets**. The person who joins the line first gets their ticket first (`FIFO`). New customers join the back of the line (`rear`), and customers leave from the front of the line (`front`) after being served.

---

## Code Snippets

### Enqueue (Insertion)
```cpp
if (rear == max_size) {
    cout << "Queue is Full\n";
} else {
    queue[rear++] = element; // Insert at rear and increment rear
}
```

### Dequeue (Deletion)
```cpp
if (front == rear) {
    cout << "Queue is Empty\n";
} else {
    cout << "Deleted element: " << queue[front++]; // Retrieve front and increment front
}
```

---

## Key Points to Remember
- Queues are used in CPU scheduling, printer queues, buffer management, and BFS traversal.
- Insertion happens at the `rear` and deletion at the `front`.
- Time complexity of insertion and deletion is O(1) in a standard queue.
- In linear queues, when `rear` reaches the array limit, no more elements can be added even if the front space is empty.

---

## Quick Reference Table

| Operation | Time Complexity | Pointer Altered |
| --------- | --------------- | --------------- |
| Enqueue (Insert) | O(1) | Increments `rear` |
| Dequeue (Delete) | O(1) | Increments `front` |
| Display | O(N) | None (Traverses from `front` to `rear`) |

