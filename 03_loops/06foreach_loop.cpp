#include <iostream>
using namespace std;
// for each loop

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int num : nums)
    {
        std::cout << num * num << endl;
    }


    std::string students[] = {"admin", "spongebob", "patric", "wilsom"};

    for (std::string student : students)
    {
        std::cout << student << endl;
    }
    
    return 0;
}