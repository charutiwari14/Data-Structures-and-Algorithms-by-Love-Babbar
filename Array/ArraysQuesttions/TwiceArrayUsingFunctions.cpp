#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<2*arr[i]<<" ";
    }
    
}

int main(){
    int arr[]={1,1,2,3,5,8,7,6,8};
    int size=9;

    printArray(arr,size);

}