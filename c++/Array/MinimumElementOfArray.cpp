#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    // Input
    for(int  i= 0;i<=n-1;i++){
       cin>>arr[i];
    }
    int min = arr[0];
    for(int i=0;i<=n-1;i++){
        if( arr[i]<min){
            min = arr[i];

        }
       
    }
     cout<<"The Maximum element of the Array is :"<<min;




}