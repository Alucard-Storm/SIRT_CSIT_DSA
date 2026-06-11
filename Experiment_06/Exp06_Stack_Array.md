# Experiment 06 — Stack Implementation Using Array

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program to implement a stack using an array.

## 2. Theory
A **Stack** is a linear data structure that follows the **Last-In-First-Out (LIFO)** principle. The last element added is the first one to be removed. It supports:

- **Push**: Adds an element to the top of the stack.
- **Pop**: Removes the top element from the stack.
- **Display**: Shows all stack elements.
- **Overflow Check**: Occurs when trying to push onto a full stack (`top >= max_size - 1`).
- **Underflow Check**: Occurs when trying to pop from an empty stack (`top <= -1`).

## 3. Implementation Code

```cpp
#include<iostream>

using namespace std;

// Define global variables accessible to all functions
int stack[100],choice,n,top,x,i;

// Function declarations (prototypes)
void push(void);    // Add element to stack
void pop(void);     // Remove element from stack
void display(void); // Show stack elements

int main()
{
    // Initialize top as -1 to indicate empty stack
    top=-1;
    
    // Get stack size from user (maximum 100)
    cout<<"\n Enter the size of STACK[MAX=100]:";
    cin>>n;
    
    // Display menu options
    cout<<"\n\t STACK OPERATIONS USING ARRAY";
    cout<<"\n\t--------------------------------";
    cout<<"\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT";
    
    // Menu loop continues until user chooses to exit
    do
    {
        cout<<"\n Enter the Choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                push();    // Call push function
                break;
            }
            case 2:
            {
                pop();     // Call pop function
                break;
            }
            case 3:
            {
                display(); // Call display function
                break;
            }
            case 4:
            {
                cout<<"\n\t EXIT POINT ";
                break;
            }
            default:
            {
                cout<<"\n\t Please Enter a Valid Choice(1/2/3/4)";
            }
                
        }
    }
    while(choice!=4);
    return 0;
}

// Function to insert element (Push operation)
void push()
{
    // Check if stack is full
    if(top>=n-1)
    {
        cout<<"\n\tSTACK is over flow";
    }
    else
    {
        // Get value from user and add to stack
        cout<<" Enter a value to be pushed:";
        cin>>x;
        top++;              // Increment top
        stack[top]=x;       // Store value at top
    }
}

// Function to delete element (Pop operation)
void pop()
{
    // Check if stack is empty
    if(top<=-1)
    {
        cout<<"\n\t Stack is under flow";
    }
    else
    {
        // Display and remove top element
        cout<<"\n\t The popped elements is "<<stack[top];
        top--;             // Decrement top
    }
}

// Function to display all elements in stack
void display()
{
    if(top>=0)
    {
        cout<<"\n The elements in STACK \n";
        // Loop from top to bottom of stack
        for(i=top; i>=0; i--)
            cout<<"\n"<<stack[i];
        cout<<"\n Press Next Choice";
    }
    else
    {
        cout<<"\n The STACK is empty";
    }
}
```

## 4. Expected Output

```text
Enter the size of STACK[MAX=100]: <size>
STACK OPERATIONS USING ARRAY
1.PUSH
2.POP
3.DISPLAY
4.EXIT
...
```

## 5. Viva / Discussion Questions
1. **LIFO Principle:** What is the LIFO principle? Give two real-world examples.
2. **Overflow/Underflow:** What are the conditions for Stack Overflow and Stack Underflow?
3. **Stack Complexity:** What is the time complexity of Push and Pop operations in a stack?
4. **Top Variable:** Why is the variable top initialized to -1 in this implementation?
5. **Applications:** What are some common applications of stack in computer science?

---

[Back to Main Index](../README.md)
