/*
Aim: Write a program to Implement Queue using Array.

Queue uses First in First Out (FIFO) principle. In a Queue, elements are inserted at the rear end 
and deleted from the front end, similar to a real-world queue of people.

This program implements a Queue using an array with the following operations:
1. Insertion (Enqueue) - Add elements at rear end
2. Deletion (Dequeue) - Remove elements from front end  
3. Display - Show all elements currently in queue
4. Exit - Terminate the program

Key variables used:
- queue[n]: Array to store queue elements
- front: Index pointing to front of queue
- rear: Index pointing to rear of queue
- x: Tracks available space
- n: Maximum size of queue (set to 5)
*/

#include<iostream>
#define n 5

using namespace std;

int main()
{
    // Define Variables
    // queue - array to store elements
    // ch - store user's menu choice
    // front,rear - track queue boundaries
    // j - counter for input prompts
    // x - tracks available space
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;

    // Display menu options to user
    cout<<"Queue using Array";
    cout<<"\n1.Insertion \n2.Deletion \n3.Display \n4.Exit";
    
    while(ch)
    {
        cout<<"\nEnter the Choice: ";
        cin>>ch;
        switch(ch)
        {

        // Case 1: Insert element at rear
        case 1:
            if(rear==x)
                cout<<"\n Queue is Full";  // Check if queue is full
            else
            {
                cout<<"\n Enter no :"<<j++;
                cin>>queue[rear++];  // Insert element and increment rear
            }
            break;
        
        // Case 2: Delete element from front
        case 2:
            if(front==rear)
            {
                cout<<"\n Queue is empty";  // Check if queue is empty
            }
            else
            {
                cout<<"\n Deleted Element is "<<queue[front++];  // Remove and display front element
                x++;  // Increment available space
            }
            break;
        
        // Case 3: Display all queue elements
        case 3:
            cout<<"\nQueue Elements are:\n ";
            if(front==rear)
                cout<<"\n Queue is Empty";
            else
            {
                for(i=front; i<rear; i++)  // Loop from front to rear
                {
                    cout<<queue[i];
                    cout<<"\n";
                }
                break;
        
        // Case 4: Exit program
        case 4:
                exit(0);
            default:
                cout<<"Wrong Choice: please see the options";
            }
        }
    }
    return 0;
}
