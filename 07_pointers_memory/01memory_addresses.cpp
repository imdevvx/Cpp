#include <iostream>
using namespace std;
// memory addresses 

/* 
a location in memory where data is stored 
a memory address can accessed with & (address-of operator)
- Hexadecimal address
*/

int main()
{
    std::string name = "Admin";
    std::cout << &name << endl;
    return 0;
}