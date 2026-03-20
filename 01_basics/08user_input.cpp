#include <iostream>
using namespace std;
// cin - user input

int main()
{

    string name;
    string fullName;

    
    cout << "What is your name?: ";
    cin >> name;
    
    /*
    If we need to read a string that could contain spaces
    we use getline fn
    */
   
   cout << "What is you full name?: ";
   std::getline(std::cin >> std::ws, fullName);

   cout << "Your name is: " << name << endl;
   cout << "Your full name is: " << fullName << endl;

    return 0;
}