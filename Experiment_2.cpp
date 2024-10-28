/*
Aim: Write a program to Implement Queue using Array.

Queue uses First in First Out. In Queue the Insertion is performed on front and Deletion is performed on rear.

DO while loops is being used to show menu and ask the user which task needs to be performed on the queue.
*/

#include<iostream>
#define n 5

using namespace std;

int main()
{
    // Define Variables
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;

    // Menu for Queue
    cout<<"Queue using Array";
    cout<<"\n1.Insertion \n2.Deletion \n3.Display \n4.Exit";
    
    while(ch)
    {
        cout<<"\nEnter the Choice: ";
        cin>>ch;
        switch(ch)
        {

        // Insertion
        case 1:
            if(rear==x)
                cout<<"\n Queue is Full";
            else
            {
                cout<<"\n Enter no :"<<j++;
                cin>>queue[rear++];
            }
            break;
        
        // Deletion
        case 2:
            if(front==rear)
            {
                cout<<"\n Queue is empty";
            }
            else
            {
                cout<<"\n Deleted Element is "<<queue[front++];
                x++;
            }
            break;
        
        // Display
        case 3:
            cout<<"\nQueue Elements are:\n ";
            if(front==rear)
                cout<<"\n Queue is Empty";
            else
            {
                for(i=front; i<rear; i++)
                {
                    cout<<queue[i];
                    cout<<"\n";
                }
                break;
        
        // Exit
        case 4:
                exit(0);
            default:
                cout<<"Wrong Choice: please see the options";
            }
        }
    }
    return 0;
}
