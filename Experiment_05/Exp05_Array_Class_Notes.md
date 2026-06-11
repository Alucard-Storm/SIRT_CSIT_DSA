# Experiment 05 — Array Operations Using Classes and Objects | Notes

---

## Concept Explanation

Think of a class like a **smart tool cabinet**. Instead of having tools (functions) and parts (array) scattered all over the room, you package the parts and the tools that modify them inside a single cabinet. An object is a copy of this cabinet that you place in your room to use.

---

## Code Snippets

### Class and Object Structure
```cpp
class MyArray {
public:
    int arr[10];
    void Print() { /* loop and print */ }
    void Input() { /* loop and cin */ }
};

int main() {
    MyArray obj; // Creating object
    obj.Print(); // Calling member function
}
```

---

## Key Points to Remember
- Classes promote modularity, readability, and code reuse by grouping data and methods.
- Access specifiers (`public`, `private`, `protected`) control visibility and restrict direct access.
- The `.` operator (dot operator) is used to access members of an object.
- Member functions can access other members of the same class directly without parameters.

---

## Quick Reference Table

| Access Specifier | Accessible inside Class? | Accessible outside Class? |
| ---------------- | ------------------------ | ------------------------- |
| public | Yes | Yes |
| private | Yes | No |
| protected | Yes | No (Yes for child classes) |

