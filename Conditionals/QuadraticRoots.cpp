#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter values for a,b and c:";
    cin>>a>>b>>c;

    // cout<<"Equation is:"<<a<<"x2+"<<b<<"x+"<<c<<"=0"<<endl;

    int d=sqrt(b*b-4*a*c);
    if(d<0){
        cout<<"Roots are Imaginary";
    }
    else if(d==0){
        cout<<"Real and equal roots";
    }
    else{
        cout<<"Real and Unequal roots";
    }
    return 0;
}