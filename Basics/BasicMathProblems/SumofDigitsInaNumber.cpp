#include<iostream>
using namespace std;

int main(){
    int n=1054;
    int sum=0;

    while (n>0)//n!=0 if n is negative
    {
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    
    cout<<"Sum of digits in n: "<<sum;
}