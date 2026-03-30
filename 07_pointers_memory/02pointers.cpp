#include <iostream>
using namespace std;
// pointers

/*
Variables that stores a memory address of another variable
& address-of operator
* dereference operator
*/

int main()
{
    std::string name = "Admin";
    std::string *pName = &name;

    std::string freeFoods[5] = {"burger1", "burger2", "burger3", "burger4", "burger5"};
    /* array is already a memory address */

    std::cout << pName << endl;  // address where var name is stored
    std::cout << *pName << endl; // * to access value stored at the address within the pointer
    std ::cout << freeFoods << endl;
    std ::cout << *freeFoods << endl; // burger1

    return 0;
}