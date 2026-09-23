#include<iostream>
#include<climits>
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
    int mx = INT_MIN;
    for(int i =0 ;i<=n-1;i++){
        if(arr[i]>mx) mx = arr[i];

    }
    int smx = INT_MIN;
    for(int i =0;i<=n-1;i++){
        if(arr[i]>smx && arr[i]!=mx) smx = arr[i];

    }
    cout<<mx<<" "<<smx<<endl;





}