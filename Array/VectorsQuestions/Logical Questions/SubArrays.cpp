#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,2,3,4};
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if(i==j){
                cout<<nums[i]<<endl;
            }
            if(i<j){
                int k=i;
                while (k<=j)
                {
                    cout<<nums[k];
                    k++;
                }
                cout<<endl;
                
            }
        }
        
    }
    
}