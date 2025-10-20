#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    int positive=0;
    int negative=0;
    for(auto x:v){
        if(x>0){
            positive++;
        }
        if(x<0){
            negative++;
        }
    }
    cout<<"Positive:"<<positive<<endl;
    cout<<"Negative:"<<negative;
}
