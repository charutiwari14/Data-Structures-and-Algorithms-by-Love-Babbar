#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cout<<"Enter value:";
        cin>>n;
        v.push_back(n);
    }

    for(auto x: v){
        cout<<x<<" ";
    }

    
}