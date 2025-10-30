#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,1,1,1,2,2,2,2,2,2,2,2};
    
    map<int,int>m;
    for(auto x:v){
        m[x]++;
    }
    
    for(auto x:m){
        if(x.second>=(v.size()/2)){
            cout<<x.first;
        }
    }
    
}