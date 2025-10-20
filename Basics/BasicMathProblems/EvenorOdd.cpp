#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;

    if(num&1){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }
}