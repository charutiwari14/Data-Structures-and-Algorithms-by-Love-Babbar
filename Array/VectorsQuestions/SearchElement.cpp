#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    int element=55;
    for(auto x:v){
        if(x==element){
            cout<<"Element found";
            return 0;
        }
    }
    cout<<"Not Found";
}