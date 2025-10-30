#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,8,3,4,9,6,7,2};
    int Smallest=INT_MAX;
    int sSmallest=INT_MAX;

    for(auto x: arr){
        if(x<Smallest){
            sSmallest=Smallest;
            Smallest=x;
        }
    }
    cout<<"Smallest is:"<<Smallest;
    cout<<endl;
    cout<<"Second Smallest is:"<<sSmallest;
}