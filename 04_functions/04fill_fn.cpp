#include <iostream>
using namespace std;
// fill function

/*
Fills a range of element with a specified value
fill (begin, end, value)
*/
int main()
{

    const int size = 18;
    std::string foods[size];

    fill(foods, foods + (size / 3), "pizza");
    fill(foods + (size / 3), foods + (size / 3)*2, "burger");
    fill(foods + (size / 3)*2, foods + size, "fries");

    for (std::string food : foods)
    {
        std::cout << food << endl;
    }

    return 0;
}