#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;

    int flag=0;
    if(num<0){
        flag=1;
    }

    num=abs(num);
    int reverse=0;
    while(num!=0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }

    if(flag==1){
        reverse=0-reverse;
    }

    cout<<"Answer is "<<reverse;
}