#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int minimum=INT_MAX;
    int num=7961034;
    while(num!=0){
        int digit=num%10;
        minimum=min(digit,minimum);
        num=num/10;
    }
    cout<<"Minimum Element is:"<<minimum;
}