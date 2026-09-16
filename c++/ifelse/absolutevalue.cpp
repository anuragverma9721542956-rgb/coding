#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number  : ";
    int x;
    cin>>x;
    // if(x>0){
    //     cout<<x;

    // }
    // else{
    //     cout<<-x;

    // }
    if(x<0){
        x=-x;
    }
    cout<<x;
}