#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    for (int i = 0; i < n; i++)//This will print 5 rows
    {
        for (int j = 0; j < n; j++)//This will print only 1 row
        {
            cout<<"*"<<" ";
        }
        cout<<endl;//This will change lines
    }
    
}