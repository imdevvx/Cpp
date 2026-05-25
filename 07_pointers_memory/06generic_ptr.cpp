#include <iostream>
using namespace std;

/* 
A generic pointer is another name for a void pointer (void*).
It is a special type of pointer that can hold the memory address of any data type
*/

int main()
{
    int val = 10;
    void* genericPtr = &val; // Points to an int

    // To access the value, you must cast it back to an int*
    int *intPtr = static_cast<int*>(genericPtr);
    cout << *intPtr << endl;
    return 0;
}

/*
Note when we add a number to a pointer -:
pointer moves by:
number x size of datatype

so if address of numPtr (pointer to an int of 4 bytes) is 5000.
and if we do numPtr = numPtr + 3
then 3 x 4 = 12 
numPtr = 5000 + 12 = 5012
*/