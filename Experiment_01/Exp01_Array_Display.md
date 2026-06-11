# Experiment 01 — Array Initialization and Display

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program to initialize an array and display its elements.

## 2. Theory
An array is a linear data structure that stores a collection of elements of the same data type in contiguous memory locations. It is a static data structure where size is determined at compile-time.

- **Initialization**: Declaring the array with preset values, e.g., `int arr[10] = {10,20,30,40,50,60,70,80,90,100};`
- **Traversal**: Accessing each element of the array from index `0` to `size-1` using a loop (such as a `for` loop).

## 3. Implementation Code

```cpp
#include<iostream>

using namespace std;

int main()
{
    // array named arr
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int i;

    // For loop to display elements of array
    cout<<"Elemets of array ";
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
```

## 4. Expected Output

```text
Elemets of array 10 20 30 40 50 60 70 80 90 100
```

## 5. Viva / Discussion Questions
1. **Array Indexing:** What is an array and what is its indexing scheme?
2. **Memory Layout:** Why are array elements stored in contiguous memory locations?
3. **Access Complexity:** What is the time complexity of accessing an element in an array by index?
4. **Pros & Cons:** What are the key advantages and disadvantages of static arrays?
5. **Out-of-Bounds:** What happens if you try to access an element beyond the size of the array in C++?

---

[Back to Main Index](../README.md)
