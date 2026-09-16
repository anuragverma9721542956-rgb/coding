#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number";
    int x;
    cin>>x;
    if(x%3==0 &&x%5==0){
        cout<<"the given number is divisible by 5 and 3";


    }
    else{
         cout<<"the given number is not divisible by 5 and 3";
    }
}