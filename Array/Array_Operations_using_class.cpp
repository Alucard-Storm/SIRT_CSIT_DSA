/*
Aim: Write a program to initialze an array and perform operations on it utilising class object

Function Print is being used to give output of the elements of the array.
Function Input is being used to store elements in the array.
Function Replace is being used to take position and value and then replace element of the array
*/

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
