/*
Aim: Write a program to initialze an array and perform operations on it using functions
Function display is being used to give output of the elements of the array.
Function input is being used to store elements in the array.
*/

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