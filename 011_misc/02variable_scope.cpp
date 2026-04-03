#include <iostream>
using namespace std;
// variable scope

/*
Local variable - declared inside a function or a block {}
Global variable - declared outside of all functions
A fn will use any local variable first before resorting to any global variables
To give priority the the global variable we can use this -:
cout << ::
*/
  
int num = 2;
int mynum = 2;

void printNum();
void printNum(int num);

int main()
{
    int mynum = 1;
    printNum(); // 1
    printNum(num); // 2
    cout << mynum << endl; // 1 - local variable
    cout << ::mynum << endl; // 2 - global variable
    return 0;
}

void printNum()
{
    int num = 1;
    cout << num << endl;
}
void printNum(int num)
{
    cout << num << endl;
}