#include <iostream>
using namespace std;
// pass array to functions

/*
when we pass an array to a function it decays into pointers
so within the function now we are working with pointers that points to the address where the array begins.
the function has no idea how big the array is
hence to solve this, while invoking the function we can pass in the array with its size
*/

double getTotal(double nums[], int size);

int main()
{
    double price[] = {10.1, 10.2, 10.3, 10.4};
    int size = sizeof(price) / sizeof(double);
    double total = getTotal(price, size);
    std::cout << total;
    return 0;
}

double getTotal(double nums[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
    }
    return sum;
}
