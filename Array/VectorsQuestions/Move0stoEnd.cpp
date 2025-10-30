#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,0,2,3,0};
    vector<int> ans;
    for(auto x: v){
        if(x!=0){
            ans.push_back(x);
        }
    }    
    int i=0;
    int j=0;
    while(j<ans.size()){
        v[i]=ans[j];
        i++;
        j++;
    }
    while (i<v.size())
    {
        v[i]=0;
        i++;
    }
    
    for(auto x: v){
        cout<<x<<" ";
    }
}