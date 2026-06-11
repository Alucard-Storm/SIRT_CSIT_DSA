# Experiment 02 — Array User Input and Display | Notes

---

## Concept Explanation

Think of this as **filling empty seats in a classroom**. The seats (indices) are pre-arranged in a row. Students (user inputs) enter one by one and take their seats in order until all seats are filled.

---

## Code Snippets

### Reading Values into Array
```cpp
int arr[10];
for(int i = 0; i < 10; i++) {
    cin >> arr[i]; // Takes input from console and stores it at index i
}
```

---

## Key Points to Remember
- Input stream `cin` reads whitespace-separated values from the terminal.
- Loops are essential for dynamically assigning values to array positions.
- If user inputs fewer values than the array size, the program waits; if more, they remain in the input buffer.
- Out-of-bounds inputs must be prevented to avoid memory corruption.

---

## Quick Reference Table

| Initialization Type | Pros | Cons |
| ------------------- | ---- | ---- |
| Static | Fast, predetermined values | Not interactive, fixed data |
| Dynamic (User Input) | Interactive, flexible data | Slower, requires user interaction and validation |

