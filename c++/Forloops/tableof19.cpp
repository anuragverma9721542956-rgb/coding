#include<iostream>
using namespace std;
int main(){

    int i;
    cout<< "enter a number : ";
    int n;
    cin>>n;
    
    for(i=n;i<=10*n;i=i+n){
        cout<<i<<endl;   
    }

}