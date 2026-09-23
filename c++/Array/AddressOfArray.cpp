#include<iostream>
using namespace std;
int main(){
    int arr[] = {45,23,89,56,32,75,-4,8};
    int n = sizeof(arr)/4;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;


}