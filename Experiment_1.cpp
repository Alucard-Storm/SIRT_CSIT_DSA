/*
Aim: Write a program to initialze an array and display its elements
*/

#include<iostream>

using namespace std;

int main()
{
    // array named arr
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int i;

    // For loop to display elements of array
    cout<<"Elemets of array ";
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}