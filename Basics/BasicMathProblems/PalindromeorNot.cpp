#include<iostream>
using namespace std;

int main(){
    int num=123454321;
    int temp=num;
    int reverse=0;
    while(num>0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }

    if(temp==reverse){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
} 