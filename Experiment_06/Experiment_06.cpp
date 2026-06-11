/*
Aim: Write a program to Implement stack using array.

Stack is a linear data structure that follows the Last In First Out (LIFO) principle.
This means that the last element inserted into the stack is the first one to be removed.
Think of it like a stack of plates - you can only add or remove plates from the top.

Key Operations:
1. Push - Add an element to the top of stack
2. Pop - Remove the topmost element from stack
3. Display - Show all elements currently in stack

Key Variables Used:
- stack[100]: Array to store stack elements 
- top: Index pointing to top of stack (-1 when empty)
- n: Maximum size of stack (user-defined, max 100)
- choice: Store user's menu choice
- x: Temporary variable to store element being pushed

The program implements a menu-driven interface using do-while loop that allows users to:
1. Push elements onto stack
2. Pop elements from stack  
3. Display all elements
4. Exit the program
*/

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

