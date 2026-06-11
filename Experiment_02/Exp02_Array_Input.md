# Experiment 02 — Array User Input and Display

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program to initialize an array and take user input to store elements in the array.

## 2. Theory
Taking user input in C++ is performed using the standard input stream `cin`. To populate an array dynamically, we use a loop (e.g., `for` loop) to iterate through the array indices, taking input from the standard input stream (`cin`) and storing it at the current index.

## 3. Implementation Code

```cpp
#include<iostream>

using namespace std;

int main()
{
    // declaing array named arr
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int i;
    
    // For loop to display elements of array
    cout<<"Elemets of array ";
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    // For loop to insert elements in array
    cout<<"Enter values for the array ";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }

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
Elemets of array 10 20 30 40 50 60 70 80 90 100 Enter values for the array <user inputs 10 values> Elemets of array <10 new values>
```

## 5. Viva / Discussion Questions
1. **Input Stream:** How does the cin stream extraction operator work for array elements?
2. **Loops in Array:** Why do we need a loop to store user inputs into an array?
3. **Static vs Dynamic:** What is the difference between static initialization and dynamic user input?
4. **Buffer Overflow:** What is a buffer overflow, and how does it relate to array inputs?
5. **Garbage Values:** What values are stored in a local array if it is declared but not initialized?

---

[Back to Main Index](../README.md)
