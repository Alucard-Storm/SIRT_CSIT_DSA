# Experiment 08 — Singly Linked List Implementation | Notes

---

## Concept Explanation

Think of a linked list like a **scavenger hunt**. You don't know where all the clues are located ahead of time. Instead, the first clue (`head`) tells you where the second clue is, the second clue tells you where the third clue is, and the last clue tells you there are no more clues (`NULL`).

---

## Code Snippets

### Node Class Definition
```cpp
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
```

### Insertion at the End
```cpp
void insertNode(int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
```

---

## Key Points to Remember
- Linked lists grow and shrink dynamically during program execution.
- Insertion and deletion at the beginning take O(1) time.
- Searching or accessing an element by index takes O(N) time (no random access).
- Singly linked lists can only be traversed in one direction (forward).

---

## Quick Reference Table

| Operation | Array | Linked List |
| --------- | ----- | ----------- |
| Memory Allocation | Static (compile-time) | Dynamic (run-time) |
| Access by Index | O(1) (Fast) | O(N) (Slow) |
| Insertion at Start | O(N) (Requires shifting) | O(1) (Fast) |
| Size | Fixed size | Dynamic size |

