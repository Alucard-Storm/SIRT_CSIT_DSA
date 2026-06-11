# Experiment 04 — Replace Element in Array at Given Position

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program to replace an element of the array at a given position.

## 2. Theory
Replacing an element in an array involves directly accessing the specific index where the element is stored and overwriting its value. Since array indexing is 0-based in C++, a user-specified 1-based position `pos` corresponds to index `pos - 1`.

## 3. Implementation Code

```cpp
#include<iostream>

using namespace std;

int main()
{
    int array[10]={10,20,30,40,50,60,70,80,90,100};
    // Variables pos is for storing position and variable val is for storing the value which needs to be inserted in the array
    int pos,val;
    
    // for loop to display the elements of array
    for(int i=0; i<10; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<"\nEnter the position where you want to Insert Element ";
    cin>>pos;
    cout<<"Enter the Element ";
    cin>>val;

    array[pos-1]=val; // pos-1 because the array addressing starts from 0

    // for loop to display the updated array
    for(int i=0; i<10; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}
```

## 4. Expected Output

```text
10 20 30 40 50 60 70 80 90 100 
Enter the position where you want to Insert Element <user enters position>
Enter the Element <user enters element>
<updated array values>
```

## 5. Viva / Discussion Questions
1. **Index Mapping:** Why do we use the index pos-1 to replace an element at position pos?
2. **Replacement Complexity:** What is the time complexity of replacing an element in an array? Why?
3. **Bounds Checking:** What occurs if the user inputs a position outside the valid array bounds?
4. **Insert vs Replace:** How does replacing an element differ from inserting an element in an array?
5. **Input Validation:** How can we validate user inputs to ensure memory safety?

---

[Back to Main Index](../README.md)
