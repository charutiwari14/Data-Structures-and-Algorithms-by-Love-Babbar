#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter Length:";
    cin>>length;
    cout<<"Enter Breadth:";
    cin>>breadth;

    for (int i = 0; i < breadth; i++)
    {
        for (int j = 0; j < length; j++)
        {
           if (i==0||i==breadth-1||j==0||j==length-1)
           {
                 cout<<"*"<<" ";
           }
           else{
                cout<<" "<<" ";
           }
           
        }
        cout<<endl;
    }

    return 0;
}