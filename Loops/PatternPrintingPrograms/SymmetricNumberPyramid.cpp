#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows:";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int value=1;
        for (int j = 0; j < i+1; j++)
        {
            cout<<value<<" ";
            value++;
        }
        for (int k = 0; k <2* (n-i-1); k++)
        {
            cout<<"  ";
        }
        for (int l = 0; l <i+1 ; l++)
        {
            value--;
            cout<<value<<" ";
        }
        
        
        
        cout<<endl;
    }
    
}