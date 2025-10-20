#include <iostream>
using namespace std;

// Linear Search in an array

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search;
    cout << "Which element do you want to search?" << " ";
    cin >> search;

    // // Using for-each loop
    // for (auto x : arr)
    // {
    //     if (x == search)
    //     {
    //         cout << "Element found";
    //         return 0;
    //     }
    // }

    // // using for loop
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == search)
    //     {
    //         cout << "Found at index:" << i;
    //         return 0;
    //     }
    // }

    //if element not found
    // cout << "Element Not Found";



    return 0;
}