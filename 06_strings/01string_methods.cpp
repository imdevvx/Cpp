#include <iostream>
using namespace std;
// string methods

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Name length: " << name.length() << endl;

    if (name.empty())
    {
        cout << "You didn't enter your name" << endl;
    }
    else
    {
        cout << "Your name is: " << name << endl;
    }

    // name.erase(0, 3);
    // cout << name;
    
    // cout << "Your name 1st char is: " << name.at(0) << endl;
    
    // name.append("@gmail.com");
    // cout << "Your gmail is: " << name << endl;
    
    // cout << "The index of the first whitespace in your name is: " << name.find(' ') << endl;

    // name.insert(0, "@");
    // cout << "Your unique identity name is: " << name << endl;

    // name.clear();
    // cout << "Hello: " << name;

    return 0;
}