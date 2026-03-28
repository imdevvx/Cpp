#include <iostream>
#include <string>
using namespace std;

int main()
{
    string foods[5];
    int size = sizeof(foods) / sizeof(string);

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter a food you like #" << i + 1 << ": ";
        std::getline(cin, foods[i]);
    }

    std::cout << "You like the following foods -:\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << foods[i] << endl;
    }

    return 0;
}