#include <iostream>
#include <typeinfo>
using namespace std;
// type conversion

/*
means converting a value of one data type to another
Implicit(automatic) and explicit(precede value with new data type (int))
*/

int main()
{
    // Number to string
    int n1 = 100;
    string n2 = to_string(n1);
    cout << n2 << " " << n2.length() << endl; // length method can only be used on strings

    // String to integer
    string n3 = "12345";
    int n4 = stoi(n3);
    cout << n4 << " " << typeid(n4).name() << endl;

    // String to double
    string n5 = "12345.5";
    double n6 = stod(n5);
    cout << n6 << " " << typeid(n6).name() << endl;

    // Number to number
    int n7 = 10;
    double n8 = static_cast<double>(n7);
    cout << n8 << " " << typeid(n8).name() << endl;

    // Implicit conversion
    int x = 3.14;
    cout << x << endl; // 3

    // Explicit conversion
    double y = 3.14;
    y = (int)3.14; 
    cout << y << endl; // 3

    int correct = 8;
    int questions = 10;
    double score = (double)correct / questions * 100;
    cout << score << "%" << endl; // without double 0%

    return 0;
}