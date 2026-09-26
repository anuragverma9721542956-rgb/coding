#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number : ";
    cin>>a;
    if(a%5==0){
        if(a%3==0){
            cout<<"the number is divisible both 3 and 5";
        }
        else{
            cout<<"the number is not divisible both 3 and 5";
        }
    

    }
    else{
        if(a%5==0){
            cout<<"the is number divisible both 3 and 5";
        }
        else{
            cout<<"the is not number divisible both 3 and 5";
        }


    }
}
