#include <iostream>
using namespace std;
// arithmetic operations

int main (){

    int students = 10;
    // students += 1;
    // students -= 1;
    // students *= 2;
    // students /= 2;
    // same as students = students + 1, - 1, * 2, / 2

    int reaminder = students % 3;

    students = students + 1;
    cout << students << endl;
    cout << reaminder << endl;

    /* 
    precedence order -:
    // paranthesis
    // multipication & division
    // addition & subtraction
    */

    students = 6 - 5 + 4 * 3 / 2;
    cout << students << endl;
    return 0;
}