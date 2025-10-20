#include<iostream>
using namespace std;

int main(){
    int arr[]={1,0,1,0,0,1,1,0,0,0,1,0};
    int countZeroes=0;
    int countOnes=0;
    for(auto x: arr){
        if(x==0){
            countZeroes++;
        }
        else{
            countOnes++;
        }
    }

    cout<<"Number of Zeroes:"<<countZeroes;
    cout<<endl;
    cout<<"Number of Ones:"<<countOnes;
}
