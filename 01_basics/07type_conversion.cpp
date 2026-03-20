#include <iostream>
using namespace std;
// type conversion

/*
means converting a value of one data type to another
Implicit(automatic) and explicit(precede value with new data type (int))
*/

int main()
{

    int x = 3.14;
    cout << x << endl; // 3 (automatic conversion - Implicit)

    double y = 3.14;
    y = (int)3.14; // explicit type conversion
    cout << y << endl;

    int correct = 8;
    int questions = 10;
    double score = (double) correct / questions * 100;
    cout << score << "%" << endl; // without double 0%
    return 0;
}