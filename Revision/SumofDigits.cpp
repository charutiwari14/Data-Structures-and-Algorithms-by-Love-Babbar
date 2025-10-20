#include<iostream>
using namespace std;

int main(){
    int num=852456;
    int sum=0;
    while(num!=0){
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    cout<<"Sum="<<sum;
}