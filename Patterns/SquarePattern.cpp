#include<iostream>
using namespace std;

int main(){
    int n=5;

    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }

    // 1
    // 2 2 
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }


    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    for (int i = 5; i >0; i--)
    {
        for (int j = 0; j <i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }

    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <=5-i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    //     *
    //    ***
    //   *****
    //  *******
    // *********

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"  ";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"  "; 
        }
        for (int j = 0; j < 2*(n-i)-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
    
    
    

    
    
}