#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n=4564313;
    int smallest=INT_MAX;
    while (n>0)
    {
        int digit=n%10;
        // if(digit<smallest){
        //     smallest=digit;
        // }
        smallest=min(smallest,digit);
        n=n/10;
    }

    cout<<"Smallest is:"<<smallest;
    return 0;
}