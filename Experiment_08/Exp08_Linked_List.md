# Experiment 08 — Singly Linked List Implementation

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program to implement a singly linked list with insertion and deletion operations.

## 2. Theory
A **Linked List** is a dynamic linear data structure in which elements are stored in nodes that are distributed non-contiguously in memory. Each node consists of two parts:

1. **Data**: Stores the actual value.
2. **Next Pointer**: Stores the memory address of the next node.

The list starts at a pointer called `head` and terminates with a `NULL` pointer. Memory is allocated dynamically during runtime using `new` (in C++), avoiding the size constraints of arrays.

## 3. Implementation Code

```cpp
#include <iostream>
using namespace std;

// Node class represents a single node in the linked list
// Each node contains data and a pointer to the next node
class Node {
public:
    int data;    // Data stored in the node
    Node* next;  // Pointer to the next node

    // Default constructor - initializes node with data=0 and null next pointer
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor - creates node with given data and null next pointer
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Linkedlist class implements the linked list data structure
// Contains methods for inserting, deleting and displaying nodes
class Linkedlist
{
    Node* head;  // Points to the first node of the list

    public:
    // Default constructor - initializes empty list with null head
    Linkedlist()
    {
        head = NULL;
    }

    // Function declarations
    void insertNode(int);    // Inserts node at the end
    void printList();        // Displays all nodes
    void deleteNode(int);    // Deletes node at given position
};

// Function to delete a node at the given position (nodeOffset)
void Linkedlist::deleteNode(int nodeOffset)
{
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = 0;

    // Check if list is empty
    if (head == NULL)
    {
        cout << "List empty." << endl;
        return;
    }

    // Calculate length of the linked list
    while (temp1 != NULL) {
        temp1 = temp1->next;
        ListLen++;
    }

    // Validate if given position is within list bounds
    if (ListLen < nodeOffset)
    {
        cout << "Index out of range" << endl;
        return;
    }

    // Reset temp1 to head for node deletion
    temp1 = head;

    // Special case: Deleting the first node (head)
    if (nodeOffset == 1)
    {
        head = head->next;   // Move head to second node
        delete temp1;        // Delete original head
        return;
    }

    // Traverse to the node to be deleted
    while (nodeOffset-- > 1)
    {
        temp2 = temp1;           // Keep track of previous node
        temp1 = temp1->next;     // Move to next node
    }

    // Link previous node to next node, bypassing the node to be deleted
    temp2->next = temp1->next;

    // Free memory of the deleted node
    delete temp1;
}

// Function to insert a new node at the end of the list
void Linkedlist::insertNode(int data)
{
    // Create a new node with given data
    Node* newNode = new Node(data);

    // If list is empty, make new node the head
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Traverse to the last node
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Link new node at the end
    temp->next = newNode;
}

// Function to display all nodes in the linked list
void Linkedlist::printList()
{
    Node* temp = head;

    // Check if list is empty
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }

    // Print data from each node
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Main function to demonstrate linked list operations
int main()
{
    // Create a new linked list
    Linkedlist list;

    // Insert nodes with values 1,2,3,4
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);

    cout << "Elements of the list are: ";

    // Display the initial list
    list.printList();
    cout << endl;

    // Delete node at position 2
    list.deleteNode(2);

    cout << "Elements of the list are: ";
    // Display the list after deletion
    list.printList();
    cout << endl;
    return 0;
}
```

## 4. Expected Output

```text
Elements of the list are: 1 2 3 4 
Elements of the list are: 1 3 4 
```

## 5. Viva / Discussion Questions
1. **Array vs List:** How does a linked list differ from an array in memory allocation?
2. **Node Composition:** What is a Node, and what does it contain?
3. **Dynamic structures:** Explain the difference between static and dynamic data structures.
4. **Delete Complexity:** What is the time complexity of deleting the first node vs the last node in a singly linked list?
5. **Memory Management:** What is a memory leak, and why is deleteNode critical in C++?

---

[Back to Main Index](../README.md)
