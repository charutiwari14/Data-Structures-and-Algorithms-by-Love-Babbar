#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,8,3,4,9,6,7,2};
    int largest=INT_MIN;
    int slargest=INT_MIN;

    for(auto x:arr){
        if(x>largest){
            slargest=largest;
            largest=x;
        }
    }
    cout<<"Second Largest Element is:"<<slargest;
    cout<<endl;
    cout<<"Largest Element is :"<<largest;
}