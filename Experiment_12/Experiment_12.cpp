// Aim: Write a program using pointers to print all characters in a string

#include <iostream>
using namespace std;

int main()
{
    // Declare character array of size 100 to store input string
    char str[100];
    // Declare pointer to character that will be used to traverse the string
    char *p;

    cout<<"Enter any string: ";
    // Use fgets() to read string from standard input including spaces
    // Parameters: destination array, max characters to read, input stream
    fgets(str, 100, stdin);

    /* Assigning the base address str[0] to pointer
     * p. p = str is same as p = str[0]
     * This allows us to traverse the string using pointer arithmetic
     */
    p=str;

    cout<<"The input string is: ";
    
    // Loop continues until null terminator '\0' is encountered
    // '\0' signifies end of the string
    while(*p!='\0') {
        // Print current character and increment pointer to next position
        // *p++ first uses value at p, then increments p to point to next char
        cout<< *p++;
    }

    return 0;
}
