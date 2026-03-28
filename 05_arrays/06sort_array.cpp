#include <iostream>
using namespace std;
// sort an array - bubble sort

void sort(int array[], int size);

int main()
{
    int array[] = {1, 6, 3, 7, 9, 2, 0, 4, 8, 10, 5};
    int size = sizeof(array) / sizeof(int);

    sort(array, size);

    for(int element : array){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1]) // for descending order use less than
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}