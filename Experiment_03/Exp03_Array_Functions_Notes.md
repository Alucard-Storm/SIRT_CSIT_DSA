# Experiment 03 — Array Operations Using Functions | Notes

---

## Concept Explanation

Think of a global array like a **public whiteboard in a classroom**. Anyone (any function) can walk up to it, read what is written on it (`display`), or erase and write new numbers on it (`input`).

---

## Code Snippets

### Global Array Declaration
```cpp
int array[10] = {2,4,6,8,10,12,14,16,18,20}; // Global scope

void display() {
    // Can access 'array' directly without passing it
    for(int i = 0; i < 10; i++) cout << array[i];
}
```

---

## Key Points to Remember
- Global variables are accessible by any function in the source file.
- Using global variables reduces the need to pass arguments, but makes code harder to debug and test.
- Global variables are initialized to zero by default if not explicitly initialized.
- Modifying global state from multiple functions can lead to side effects.

---

## Quick Reference Table

| Scope | Lifetime | Accessibility |
| ----- | -------- | ------------- |
| Local | Function Execution | Only within the function |
| Global | Program Lifetime | Everywhere in the file |

