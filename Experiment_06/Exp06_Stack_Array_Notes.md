# Experiment 06 — Stack Implementation Using Array | Notes

---

## Concept Explanation

Think of a stack like a **pile of plates in a cafeteria**. You can only add a new plate to the top of the pile (`Push`), and you can only take a plate off the top of the pile (`Pop`). If the pile is too high, it might fall over (Overflow), and if there are no plates left, you can't take any (Underflow).

---

## Code Snippets

### Push Operation
```cpp
void push() {
    if (top >= n - 1) {
        cout << "Stack Overflow\n";
    } else {
        top++;
        stack[top] = x;
    }
}
```

### Pop Operation
```cpp
void pop() {
    if (top <= -1) {
        cout << "Stack Underflow\n";
    } else {
        cout << "Popped element is " << stack[top];
        top--;
    }
}
```

---

## Key Points to Remember
- Templates are used in function call stacks, parenthesis matching, backtracking, and undo operations.
- All operations occur at a single end called the `top`.
- Static array implementations have a fixed capacity, which can lead to Stack Overflow.
- Time complexity of push, pop, and peek is O(1).

---

## Quick Reference Table

| Operation | Time Complexity | Condition Checked |
| --------- | --------------- | ----------------- |
| Push | O(1) | Overflow: `top >= size - 1` |
| Pop | O(1) | Underflow: `top <= -1` |
| Peek/Top | O(1) | Is Empty: `top == -1` |

