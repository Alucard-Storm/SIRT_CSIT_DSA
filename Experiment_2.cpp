/*
Aim: Write a program to initialze an array and take user input to store elements in array
*/

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