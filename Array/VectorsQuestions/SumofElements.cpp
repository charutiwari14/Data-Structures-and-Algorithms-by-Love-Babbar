#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={4,5,6,7,8,1,2,3};

    int sum=0;
    for(auto x:v){
        sum+=x;
    }

    cout<<"Sum="<<sum;
}