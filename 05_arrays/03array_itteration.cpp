#include <iostream>
using namespace std;
// array iteration

int main()
{
    std::string students[] = {"admin", "bobber", "thomas", "patric"};
    std::cout << "size of array: " << sizeof(students) / 24 << endl; // one string = 24 bytes

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
    {
        cout << students[i] << endl;
    }

    return 0;
}