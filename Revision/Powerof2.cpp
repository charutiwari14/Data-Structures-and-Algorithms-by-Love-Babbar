#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num:";
    cin >> num;

    if ((num & num - 1) == 0)
    {
        cout << "Power of 2";
    }
    else
    {
        cout << "Not the power of 2";
    }
}

// point to be remembered is that precedence of == is more than &

//     if (num & (num - 1) == 0)
//     {
//         cout << "Power of 2";
//     }
