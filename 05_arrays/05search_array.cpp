#include <iostream>
using namespace std;
// search an array for an element

int main()
{

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(int);
    int index;
    int element;

    std::cout << "Enter index to search for (1 - 10): ";
    std::cin >> index;
    std::cout << "Enter element to search for (1 - 10): ";
    std::cin >> element;

    std::cout << "Index no: " << numbers[index - 1] << endl;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == element)
        {
            std::cout << "Element: "<<  numbers[i];
        }
    }

    return 0;
}