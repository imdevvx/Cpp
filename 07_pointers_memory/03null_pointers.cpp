#include <iostream>
using namespace std;
// Null pointers

/*
Null value = a special value that means something has no value.
             when a pointer is holding a null value,
             that pointer is not pointing at anything (null pointers)

nullptr = keyword represents a null pointer literal

nullptrs are helpful when determining if an address was successfully assigned to a pointer
*/

int main()
{
    int *ptr = nullptr;
    int x = 1;

    // ptr = &x;

    if (ptr == nullptr)
    {
        std::cout << "Address wasn't assigned\n";
        std::cout << *ptr;
    }
    else
    {
        std::cout << "Adress assigned\n";
        std::cout << *ptr;
    }

    return 0;
}