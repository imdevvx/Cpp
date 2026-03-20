#include <iostream>
using namespace std;
// typedef

// typedef std::string text;
// typedef int number;

/* 
typedef = reserved keyword used to create an additional name
(alias) for another data type.
*/

using text = std::string;
using number = int;

int main(){
    string greeting = "Hello";
    text name = "Dev"; // now text can be used a std::string
    cout << greeting << " " << name << endl;

    number one = 1;
    number two = 2;
    cout << one << ", " << two;
    return 0;
}