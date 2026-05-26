#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // character to int
    char ch1 = '5';
    int num1 = ch1 - '0';
    cout << num1 << endl;

    // int to char 
    int num2 = 17;
    char ch2 = num2 + '0'; // 17 + 48 = 65 and ch(65) = 'A'
    cout << ch2 << endl;

    // comparison
    char ch3;
    cout << "Enter ch: "; cin >> ch3;
    if (ch3 >= 'A' && ch3 <= 'Z'){cout << "Uppercase" << endl;}
    if (ch3 >= 'a' && ch3 <= 'z'){cout << "Lowercase" << endl;}

    cout << char(65) << endl;
    return 0;
}

/*
American Standard Code for Information Interchange (ASCII) values in c++

It is a character encoding system where:

every character
letter
digit
symbol

is stored as a unique integer value.

| Character | ASCII |
| --------- | ----- |
| Space     | 32    |
| `0`       | 48    |
| `9`       | 57    |
| `A`       | 65    |
| `Z`       | 90    |
| `a`       | 97    |
| `z`       | 122   |

Converting character to int digit -:
eg -:
'5' = 53 and '0' = 48
 53 - 48 = 5 thus '5' - '0' = 5

Converting integer digit to character -:
eg -:
int num = 7;
char ch = num + '0';
cout << ch; // 7

ASCII in Comparisons
eg -:
if(ch >= 'A' && ch <= 'Z'){cout << "Uppercase";}
*/
