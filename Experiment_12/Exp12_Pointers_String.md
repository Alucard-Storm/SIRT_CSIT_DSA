# Experiment 12 — String Traversal Using Pointers

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program using pointers to print all characters in a string.

## 2. Theory
A **Pointer** is a variable that stores the memory address of another variable. The name of an array (like a character array `str`) acts as a pointer pointing to its first element (`&str[0]`). In this program, a pointer `p` is assigned the base address of the string and incremented (`p++`) to traverse and print characters until the null character `'\0'` (which marks the end of a string in C/C++) is encountered.

## 3. Implementation Code

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Declare character array of size 100 to store input string
    char str[100];
    // Declare pointer to character that will be used to traverse the string
    char *p;

    cout<<"Enter any string: ";
    // Use fgets() to read string from standard input including spaces
    // Parameters: destination array, max characters to read, input stream
    fgets(str, 100, stdin);

    /* Assigning the base address str[0] to pointer
     * p. p = str is same as p = str[0]
     * This allows us to traverse the string using pointer arithmetic
     */
    p=str;

    cout<<"The input string is: ";
    
    // Loop continues until null terminator '\0' is encountered
    // '\0' signifies end of the string
    while(*p!='\0') {
        // Print current character and increment pointer to next position
        // *p++ first uses value at p, then increments p to point to next char
        cout<< *p++;
    }

    return 0;
}
```

## 4. Expected Output

```text
Enter any string: <user enters string>
The input string is: <entered string>
```

## 5. Viva / Discussion Questions
1. **Pointer Definition:** What is a pointer, and how do you declare and initialize it in C++?
2. **Pointer Arithmetic:** What is pointer arithmetic? What happens when a pointer is incremented?
3. **Null Terminator:** What is the significance of the null character '\0' in C-style strings?
4. **Operator Precedence:** Explain the expression *p++. What are the priorities of the dereference (*) and post-increment (++) operators?
5. **Input Mechanism:** How does fgets() differ from standard cin when reading strings?

---

[Back to Main Index](../README.md)
