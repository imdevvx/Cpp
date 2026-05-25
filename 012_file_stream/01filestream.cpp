#include <iostream>
#include <fstream>
/*
file stream header file
Used for: reading from files, writing to files, both reading and writing
*/
using namespace std;

/*
| Class      | Purpose                |
| ---------- | ---------------------- |
| `ifstream` | Input from file (read) |
| `ofstream` | Output to file (write) |
| `fstream`  | Both read and write    |

*/

int main()
{
    // // osftream creates/opens file for writing -:
    
    // ofstream fout("demo2.txt");
    // fout << "Hello world";
    // fout << "\nWelcome to C++";
    
    // fout.close();
    
    
    // // ifftream opens file for reading -:

    // ifstream fin1("demo1.txt");
    // char ch;
    // while (fin1.get(ch)) cout << ch; // read ch by ch

    // ifstream fin2("demo1.txt");
    // string line;
    // while (getline(fin2, line)) cout << line << endl; // read line by line

    // fin.close();


    fstream file("demo3.txt", ios::out); // open for writing
    file << "Hello C++ whats up";
    file.close();

    char ch;
    file.open("demo3.txt", ios::in); // open for reading
    while(file.get(ch)){
        cout << ch;
    }
    
    // file.open("demo3.txt", ios::out | ios::in) open file for both reading and writing
    // file.seekg(0); // Move ptr to begining for reading
    
    file.close();

    return 0;
}