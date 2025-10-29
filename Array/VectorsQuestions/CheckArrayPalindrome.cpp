#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,2,2,1};
    int i=0;
    int j=v.size()-1;

    while (i<j)
    {
        if(v[i]!=v[j]){
            cout<<"Not Palindrome";
            return 0;
        }
        else{
            i++;
            j--;
        }
    }
    cout<<"Palindrome";
    
}