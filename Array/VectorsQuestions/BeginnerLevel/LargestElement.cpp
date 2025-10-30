#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={5,9,1,4,7,11,2};
    int largest=v[0];
    for(auto x:v){
        if(x>largest){
            largest=x;
        }
    }

    cout<<"largest="<<largest;
}