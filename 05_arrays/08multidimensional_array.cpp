#include <iostream>
using namespace std;
// multidimensional arrays - 2 dimensional arrays

/*
array[rows][columns]
2 dimensional arrays are just arrays where each element is its own seperate array
*/

int main()
{
    std::string cars[2][4] = {
        {"Mustang", "Escape", "F-150", "Bronco"},
        {"Revuelto", "Urus SUV", "Huracan", "P400"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << endl;
        }
    }

    return 0;
}