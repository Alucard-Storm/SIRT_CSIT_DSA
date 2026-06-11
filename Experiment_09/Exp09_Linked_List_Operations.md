# Experiment 09 — Operations on Singly Linked List

**Subject:** CSIT-302 Data Structures & Algorithms Lab
**Location:** RGPV, Bhopal

---

## 1. Aim
To write a program to perform various operations on a singly linked list.

## 2. Theory
A singly linked list supports multiple operations including creation, traversal, insertion (at front, end, or specific position), deletion (from front, end, or position), calculation of aggregate properties (maximum value and mean), sorting, and list reversal.

- **Reversal**: Reversing the direction of pointers using three tracking pointers.
- **Sorting**: Comparing and swapping data values of nodes (similar to bubble sort) to arrange them in order.

## 3. Implementation Code

```cpp
// This program implements a singly linked list with various operations like:
// - Creating a list
// - Traversing the list
// - Inserting nodes at front, end and any position
// - Deleting nodes from front, end and any position
// - Finding maximum element and mean
// - Sorting the list
// - Reversing the list

#include <iostream>
#include <cstdlib>
#include <cstdio>

// Structure for a node in the linked list
// Contains an integer value (info) and pointer to next node (link)
struct node
{
    int info;
    struct node* link;
};
struct node* start = NULL; // Global pointer to track start of list

// Function to create list with n nodes initially
// Takes user input for number of nodes and data values
void createList()
{
    if(start == NULL) {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if(n != 0) {
            int data;
            struct node* newnode;
            struct node* temp;
            // Create first node
            newnode = (struct node*)malloc(sizeof(struct node));
            start = newnode;
            temp = start;
            printf("\nEnter number to be inserted : ");
            scanf("%d", &data);
            start->info = data;

            // Create remaining n-1 nodes
            for (int i = 2; i <= n; i++) {
                newnode = (struct node*)malloc(sizeof(struct node));
                temp->link = newnode;
                printf("\nEnter number to be inserted : ");
                scanf("%d", &data);
                newnode->info = data;
                temp = temp->link;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}

// Function to traverse and display all elements in the linked list
void traverse()
{
    struct node* temp;

    // List is empty
    if (start == NULL)
        printf("\nList is empty\n");

    // Print each node's data
    else {
        temp = start;
        while (temp != NULL) {
            printf("Data = %d\n", temp->info);
            temp = temp->link;
        }
    }
}

// Function to insert a new node at the front of the linked list
void insertAtFront()
{
    int data;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter number to"
        " be inserted : ");
    scanf("%d", &data);
    temp->info = data;

    // Make new node point to current start
    // Update start to point to new node
    temp->link = start;
    start = temp;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp = (struct node*)malloc(sizeof(struct node));

    // Get data for new node
    printf("\nEnter number to"
        " be inserted : ");
    scanf("%d", &data);

    // Set up new node
    temp->link = 0;
    temp->info = data;
    
    // Traverse to last node and link new node
    head = start;
    while (head->link != NULL) {
        head = head->link;
    }
    head->link = temp;
}

// Function to insert a new node at any specified position
void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = (struct node*)malloc(sizeof(struct node));

    // Get position and data for new node
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);

    // Traverse to position and insert new node
    temp = start;
    newnode->info = data;
    newnode->link = 0;
    while (i < pos - 1) {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}

// Function to delete the first node of the linked list
void deleteFirst()
{
    struct node* temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else {
        temp = start;
        start = start->link; // Move start to second node
        free(temp); // Free memory of first node
    }
}

// Function to delete the last node of the linked list
void deleteEnd()
{
    struct node *temp, *prevnode;
    if (start == NULL)
        printf("\nList is Empty\n");
    else {
        temp = start;
        // Traverse to last node keeping track of previous node
        while (temp->link != NULL) {
            prevnode = temp;
            temp = temp->link;
        }
        free(temp); // Free last node
        prevnode->link = NULL; // Update previous node's link
    }
}

// Function to delete a node from any specified position
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;

    // If LL is empty
    if (start == NULL)
        printf("\nList is empty\n");

    // Otherwise
    else {
        printf("\nEnter index : ");

        // Get position to delete
        scanf("%d", &pos);
        temp = start;

        // Traverse to node before the one to be deleted
        while (i < pos - 1) {
            temp = temp->link;
            i++;
        }

        // Remove node from list and free memory
        position = temp->link;
        temp->link = position->link;
        free(position);
    }
}

// Function to find the maximum element in the linked list
void maximum()
{
    int a[10];
    int i;
    struct node* temp;

    // If LL is empty
    if (start == NULL)
        printf("\nList is empty\n");

    // Find maximum by traversing list once
    else {
        temp = start;
        int max = temp->info;

        while (temp != NULL) {
            if (max < temp->info)
                max = temp->info;
            temp = temp->link;
        }
        printf("\nMaximum number "
            "is : %d ",
            max);
    }
}

// Function to calculate the mean of all elements in the linked list
void mean()
{
    int a[10];
    int i;
    struct node* temp;

    // If LL is empty
    if (start == NULL)
        printf("\nList is empty\n");

    // Calculate mean
    else {
        temp = start;
        int sum = 0, count = 0;
        float m;

        // Sum all elements and count nodes
        while (temp != NULL) {
            sum = sum + temp->info;
            temp = temp->link;
            count++;
        }

        // Calculate and print mean
        m = sum / (float)count;
        printf("\nMean is %f ", m);
    }
}

// Function to sort the linked list in ascending order using bubble sort
void sort()
{
    struct node* current = start;
    struct node* index = NULL;
    int temp;

    // If LL is empty
    if (start == NULL) {
        return;
    }

    // Bubble sort implementation
    else {
        while (current != NULL) {
            index = current->link;

            while (index != NULL) {
                // Swap if current node is greater than index node
                if (current->info > index->info) {
                    temp = current->info;
                    current->info = index->info;
                    index->info = temp;
                }
                index = index->link;
            }
            current = current->link;
        }
    }
}

// Function to reverse the linked list
void reverseLL()
{
    struct node *t1, *t2, *temp;
    t1 = t2 = NULL;

    // If LL is empty
    if (start == NULL)
        printf("List is empty\n");

    // Reverse using 3 pointers
    else {
        while (start != NULL) {
            // Store next node
            t2 = start->link;
            // Reverse current node's pointer
            start->link = t1;
            // Move t1 and start ahead
            t1 = start;
            start = t2;
        }
        start = t1;

        // Print reversed list
        temp = start;
        printf("Reversed linked "
            "list is : ");
        while (temp != NULL) {
            printf("%d ", temp->info);
            temp = temp->link;
        }
    }
}

// Main function - provides menu driven interface for linked list operations
int main()
{
    int choice;
    while (1) {
        // Display menu
        printf("\n\t1 To see list\n");
        printf("\t2 For insertion at starting\n");
        printf("\t3 For insertion at end\n");
        printf("\t4 For insertion at any position\n");
        printf("\t5 For deletion of first element\n");
        printf("\t6 For deletion of last element\n");
        printf("\t7 For deletion of element at any position\n");
        printf("\t8 To find maximum among the elements\n");
        printf("\t9 To find mean of the elements\n");
        printf("\t10 To sort element\n");
        printf("\t11 To reverse the linked list\n");
        printf("\t12 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

        // Process user choice
        switch (choice) {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deletePosition();
            break;
        case 8:
            maximum();
            break;
        case 9:
            mean();
            break;
        case 10:
            sort();
            break;
        case 11:
            reverseLL();
            break;
        case 12:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}
```

## 4. Expected Output

```text
Menu selection traces including traversals, maximum, mean, sorting, and reversal.
```

## 5. Viva / Discussion Questions
1. **Pointer Manipulation:** Describe the algorithm to reverse a singly linked list in-place using three pointers.
2. **Aggregation:** How do we calculate the mean of all elements in a linked list?
3. **List Sorting:** How does bubble sort operate on nodes in a linked list? Can we swap links instead of data?
4. **Dynamic Memory:** What is the difference between malloc() (used here) and new (in C++)?
5. **Insertion Complexity:** What is the complexity of inserting a node at a given position in a linked list?

---

[Back to Main Index](../README.md)
