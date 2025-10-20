#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num:";
    cin >> num;
    int ans = 0;

    // To check if num is +ve or -ve
    int flag = 0; // if positive or 0
    if (num < 0)
    {
        flag = 1; // if negative
    }

    num = abs(num);
    while (num != 0)
    {
        int digit = num % 10;
        ans = ans * 10 + digit;
        num = num / 10;
    }

    if (flag == 1)
    {
        ans = 0 - ans;
    }

    cout << "Answer:" << ans;
    return 0;
}
