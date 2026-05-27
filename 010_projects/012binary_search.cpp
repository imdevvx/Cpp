#include <iostream>
#include <algorithm>
using namespace std;

// Binary Search is a fast searching algorithm used to find an element in a sorted array.
// Instead of checking every element one by one (like linear search), binary search repeatedly divides the array into halves.

/*
Important Rule
Binary Search works only on a sorted array.
*/

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int *nums = new int[size]; // dynamic array
    // or we can use: vector<int> nums(size) => vector from <vector> header file

    cout << "Enter " << size << " array elements seperated by spaces: ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    int *start_ptr = nums;
    int *end_ptr = &nums[size]; // To use sort the end_pointer must point to the memory location immediately after the last element.

    sort(start_ptr, end_ptr); // sort fn is from algorith library
    // syntax: sort(start_pointer, end_pointer);

    cout << "Sorted array is -:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int low = 0;
    int high = size - 1;

    bool found = false;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            cout << "Element found at index: " << mid << endl;
            found = true;
            break;
        }

        // search left half
        else if (target > nums[mid])
        {
            low = mid + 1;
        }

        // search right half
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Element not found." << endl;
    }

    delete[] nums;
    return 0;
}



// // sort an array without sort function using bubble sort
// int main()
// {
//     int arr[] = {6, 7, 2, 9, 5, 4, 1, 10, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // swap the elements
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     cout << "Sorted array: ";
//     for (int n: arr)
//     {
//         cout << n << " ";
//     }
//     return 0;
// }