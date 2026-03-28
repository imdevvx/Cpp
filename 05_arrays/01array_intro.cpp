#include <iostream>
using namespace std;
// arrays

/* 
A data structure that can hold multiple values
values are accessed by an index number
"Kind" of like a variable that holds multiple values
can contain values on the same data type only.
*/

int main()
{
    std::string cars[] = {"porsche", "audi", "mercedes"};

    cout << cars[0] << endl;
    cars[0] = "mustang";
    cout << cars[0] << endl;

    // we can simply declare an array then assign values later 
    // but we need to set a size to this array
    int nums[5];

    nums[0] = 1;
    nums[1] = 2; 
    nums[2] = 3;
    nums[3] = 4;
    cout << nums[3];

    return 0;
}