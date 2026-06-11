# Experiment 12 — String Traversal Using Pointers | Notes

---

## Concept Explanation

Think of a pointer like a **house address card**. If you want to visit houses in a row, you look at the address card of the first house. When you are done, you add 1 to the house number to get the address of the next house next door, and walk over. You keep going until you find an empty/abandoned lot indicating the end of the street.

---

## Code Snippets

### Pointer Initialization & Traversal
```cpp
char str[100];
char *p = str; // p points to the first character str[0]
while(*p != '\0') {
    cout << *p; // Print current character
    p++;        // Move to the next character address
}
```

---

## Key Points to Remember
- Array names decay to pointers when assigned or passed.
- C-style strings are character arrays terminated by a null character `'\0'`.
- Dereferencing a pointer (`*p`) accesses the value stored at the address pointed to.
- The statement `*p++` retrieves the character pointed by `p` and then increments the pointer `p` to point to the next address.

---

## Quick Reference Table

| Pointer Notation | Equivalent Array Notation | Meaning |
| ---------------- | ------------------------- | ------- |
| `p` or `str` | `&str[0]` | Address of the first character |
| `*p` | `str[0]` | Value of the first character |
| `*(p + i)` | `str[i]` | Value of the character at index `i` |
| `p + i` | `&str[i]` | Address of the character at index `i` |

