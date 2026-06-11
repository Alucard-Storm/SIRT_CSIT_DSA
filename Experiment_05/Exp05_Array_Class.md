# Experiment 05 — Array Operations Using Classes and Objects

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program to initialize an array and perform operations on it utilizing a class object.

## 2. Theory
Object-Oriented Programming (OOP) wraps data and behaviors together. A `class` defines the blueprint, and an `object` is an instance of the class. In this program, the array and its operations (`Print()`, `Input()`, `replace()`) are grouped inside class `array`. Access specifier `public` makes them accessible from the `main()` function.

## 3. Implementation Code

```cpp
#include<iostream>
using namespace std;

// create class
class array
{
    public:


    // Defining Integer Array
    int array[10] = {2,4,6,8,10,12,14,16,18,20};
    int i;

    // Display Array
    void Print()
    {
        for(i=0; i<10; i++)
        {
            cout<<" "<<array[i];
        }

    }

    // User Input
    void Input()
    {
        for(i=0; i<10; i++)
        {
            cin>>array[i];
        }
    }

    // Replace Element
    void replace()
    {
        // Variables pos is for storing position and variable val is for storing the value which needs to be inserted in the array
        int pos,val;
        
        cout<<"\nEnter the position where you want to Insert Element ";
        cin>>pos;
        cout<<"Enter the Element ";
        cin>>val;

        // pos-1 because the array addressing starts from 0
        array[pos-1]=val;
    }

};

// main function
int main()
{

    // create object named "p" of call "Array" 
    array p;

    // Print Array
    p.Print();

    // User Input of array
    cout<<" \n Enter the 10 values to insert in the array ";
    p.Input();
    p.Print();

    // Replace Element
    p.Print();
    p.replace();
    p.Print();

    return 0;
}
```

## 4. Expected Output

```text
 2 4 6 8 10 12 14 16 18 20 
 Enter the 10 values to insert in the array <user inputs 10 values>
 <display array>
 Enter the position where you want to Insert Element <pos>
 Enter the Element <val>
 <display array>
```

## 5. Viva / Discussion Questions
1. **Encapsulation:** What is encapsulation and how does this experiment demonstrate it?
2. **Access Specifiers:** What is the default access specifier of a class in C++?
3. **Class vs Object:** What is the difference between a class and an object?
4. **Namespace Conflict:** Why is the class named array in this program, and does it conflict with C++ standard library std::array?
5. **Dot Operator:** What are member functions, and how are they called using objects?

---

[Back to Main Index](../README.md)
