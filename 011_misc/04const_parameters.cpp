#include <iostream>
using namespace std;
// const parameters

void printInfo(const std::string &name, const int &age);

int main()
{
    std::string name = "Admin";
    int age = 18;

    printInfo(name, age);
    return 0;
}

void printInfo(const std::string &name, const int &age)
{
    // name = "Dev"; won't work
    // age = 19; won't work

    std::cout << name << endl;
    std::cout << age << endl;
}