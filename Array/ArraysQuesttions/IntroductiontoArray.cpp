#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    //Taking array input from user
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter arr"<<"["<<i<<"]:";
        cin>>arr[i];
    }
    
    //Printing an array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }   
}

int main(){
    // //Array is a data structure that stores similar type of data
    // //Array demands continous memory location to store the data 
    //Array follows 0 to size-1 based indexing

    // //To create an array:
    // //datatype arrayname[size];
    // //datatype arrayname[]={arrayelementsseperated using commas};
    // //Array name stored base address of the array
    // int arr[5];
    // int brr[]={1,2,3,4,5};//or int brr[5]={10,20,30,40,50};
    // //Q)Create an array which stored 25 integers
    // int crr[25];
    // //Q)Create an array that can store 101 float values
    // float drr[101];
    // //Q)Create an array that can store 112 double values
    // double err[112];
    // //Q)Create an array that can store 51 boolean values
    // bool frr[51];
    //Q)Maximum value of size can be INT_MAX/4.  

    // //Lets look at the scenario detailed below
    // int arr[5];
    // cout<<arr[2];//--> Garbage value
    // int arr[]={10,20,30,40,50};
    // // To find size of an array
    // int size=sizeof(arr)/sizeof(arr[0]);
    
    //Default behaviour of an array:If we *initialise* an array having 'n' elements with value at a few indexes only => the elements on remaining indexes would be 0.
    //If we *take an input* for a few numbers of indices only=> the rest would be garbage value
    
    // // // //arr[i]=i[arr] but follow arr[i] only
    
    int arr[5];
    //Passing array in a  function: Pass by reference
    //printArray(arr,5); 
    // int brr[10];
    // printArray(brr,10);
    // //Calling function while giving array and its size:fn_name(arrayname,size);
    
    
    //To print base address of arr
    cout<<arr;

}