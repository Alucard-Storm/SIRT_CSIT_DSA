# Experiment 03 — Array Operations Using Functions

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program to initialize an array and perform operations on it using functions.

## 2. Theory
Functions modularize code by separating logic into reusable blocks. In this experiment, the array is declared globally, making it accessible to all functions in the program. The `display()` function prints the array, and the `input()` function updates array elements.

## 3. Implementation Code

```cpp
#include<iostream>

using namespace std;

// Declaring Array Globally so that it can be using in all the functions
int array[10] = {2,4,6,8,10,12,14,16,18,20};
int i;

// Display Array
void display()
{
    for(i=0; i<10; i++)
    {
        cout<<" "<<array[i];
    }

}

// User Input
void input()
{
    for(i=0; i<10; i++)
    {
        cin>>array[i];
    }
}

// Main function
int main()
{
    cout<<"Old Array ";
    display(); //calling display function to show current elements stored in the array
    
    cout<<"\nEnter the 10 Elements to be inserted in the array";
    input(); // calling input function to replace all the elements of the array
    
    cout<<"New Array ";
    display(); // calling display function again to show the updated array

    return 0;
}
```

## 4. Expected Output

```text
Old Array  2 4 6 8 10 12 14 16 18 20
Enter the 10 Elements to be inserted in the array <user inputs 10 elements>
New Array <10 new elements>
```

## 5. Viva / Discussion Questions
1. **Global Variable:** What is a global variable/array, and where is it stored in memory?
2. **Pros & Cons:** What are the advantages and disadvantages of using global arrays?
3. **Scope:** How does scope affect variable accessibility in C++?
4. **Passing Arrays:** What is the difference between passing an array to a function and using a global array?
5. **Array Size:** Can we determine the size of a globally declared array inside a function using sizeof?

---

[Back to Main Index](../README.md)
