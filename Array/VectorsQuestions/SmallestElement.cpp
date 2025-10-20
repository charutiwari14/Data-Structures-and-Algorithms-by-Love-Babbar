#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={5,9,1,4,7,-1,2};
    int smallest=v[0];
    for(auto x:v){
        if(x<smallest){
            smallest=x;
        }
    }
    cout<<"Smallest="<<smallest;
}