/*
Aim: Write a program to Implement stack using array.

Stack uses First in last out method, In stack all the operations are performed from the top.
we will use push function to insert element and pop function to delete element.
display function is used for displaying the current elements stored in the stack.

DO while loops is being used to show menu and ask the user which task needs to be performed on the stack.
*/

#include<iostream>

using namespace std;

// Define variables
int stack[100],choice,n,top,x,i;

// Define empty Functions
void push(void);
void pop(void);
void display(void);

int main()
{
    top=-1;
    cout<<"\n Enter the size of STACK[MAX=100]:";
    cin>>n;
    cout<<"\n\t STACK OPERATIONS USING ARRAY";
    cout<<"\n\t--------------------------------";
    cout<<"\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT";
    do
    {
        cout<<"\n Enter the Choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
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

// Function to insert element
void push()
{
    if(top>=n-1)
    {
        cout<<"\n\tSTACK is over flow";
    }
    else
    {
        cout<<" Enter a value to be pushed:";
        cin>>x;
        top++;
        stack[top]=x;
    }
}

// Function to delete element
void pop()
{
    if(top<=-1)
    {
        cout<<"\n\t Stack is under flow";
    }
    else
    {
        cout<<"\n\t The popped elements is "<<stack[top];
        top--;
    }
}

// Function to display the stack
void display()
{
    if(top>=0)
    {
        cout<<"\n The elements in STACK \n";
        for(i=top; i>=0; i--)
            cout<<"\n"<<stack[i];
        cout<<"\n Press Next Choice";
    }
    else
    {
        cout<<"\n The STACK is empty";
    }
}

