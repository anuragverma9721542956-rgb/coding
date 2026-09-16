#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number ";
    int n;
    cin>>n;
    if(n%3==0 ){
        if(n%5==0){
            cout<<"the given number is divisible by 5 or 3";
        }
        else{
            cout<<"the given number is not divisible by 5 or 3";
        }
    }
    else{
        cout<<"the give number is not divisible by 15 ";
    }
}