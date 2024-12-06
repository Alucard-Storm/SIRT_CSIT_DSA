/*
Aim: Write a program to replace element of the array at given position
*/

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


