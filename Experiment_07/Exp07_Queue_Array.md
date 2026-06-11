# Experiment 07 — Queue Implementation Using Array

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program to implement a queue using an array.

## 2. Theory
A **Queue** is a linear data structure that follows the **First-In-First-Out (FIFO)** principle. The first element added is the first one to be removed. It has two main pointers:

- **Rear**: Points to the end of the queue where elements are inserted (Enqueue/Insertion).
- **Front**: Points to the beginning of the queue from which elements are deleted (Dequeue/Deletion).

In a simple queue using a static array, front moves forward as items are deleted, which can cause unused spaces that cannot be re-entered without shifting or a circular design.

## 3. Implementation Code

```cpp
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
```

## 4. Expected Output

```text
Queue using Array
1.Insertion 
2.Deletion 
3.Display 
4.Exit
Enter the Choice: ...
```

## 5. Viva / Discussion Questions
1. **FIFO Principle:** What is the FIFO principle? Explain with a real-life analogy.
2. **Queue Boundaries:** What is the purpose of front and rear pointers in a queue?
3. **Overflow/Underflow:** What is Queue Overflow and Queue Underflow, and how are they checked?
4. **Linear Queue Limitation:** What is the primary drawback of a linear queue implemented using a static array?
5. **Circular Queue:** How does a Circular Queue resolve the limitation of space wastage in a linear queue?

---

[Back to Main Index](../README.md)
