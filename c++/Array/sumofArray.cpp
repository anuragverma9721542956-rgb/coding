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
    int sum = 0;

    for(int i =0;i<=n-1;i++){
        sum = sum + arr[i];
    }
    cout<<"the sum of the Array is:"<<sum;


}