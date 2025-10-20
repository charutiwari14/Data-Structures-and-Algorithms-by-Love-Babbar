#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num:";
    cin >> num;

    // If number of set bits in a number is exactly one, then it is power of 2
    if ((num & num - 1) == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}