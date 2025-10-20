#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i=0;i<size;i++){
        arr[i]=arr[i]*10;    
    }
    
    for (auto x : arr)
    {
        cout << x << " ";
    }
}