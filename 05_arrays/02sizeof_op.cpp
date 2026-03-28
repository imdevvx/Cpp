#include <iostream>
using namespace std;
// sizeof()

/*
determines the size in bytes of a:
variable, data type, class, objects, etc.
*/

int main()
{
    double gpa = 2.5;
    std::string name = "Admin dev";
    char grade = 'A';
    bool student = true;
    char chararr[] = {'a', 'b', 'c', 'd', 'e'};
    std::string students[] = {"spongebob", "patric", "squidward", "sandy"};

    std::cout << sizeof(gpa) << "bytes\n";
    std::cout << sizeof(name) << "bytes\n";
    std::cout << sizeof(grade) << "bytes\n";
    std::cout << sizeof(student) << "bytes\n";
    std::cout << sizeof(chararr) << "bytes\n";
    std::cout << sizeof(students) << "bytes\n";

    return 0;
}