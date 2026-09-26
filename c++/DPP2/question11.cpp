#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the numbers : ";
    cin>>a>>b;
    if((a>0&&b>0)||(a<0&&b<0)){
        cout<<"the product is positive.";

    }

    else if((a<0&&b>0) ||(a>0&&b<0) ){
       cout<<"the product is negative.";
    }
    else{
        cout<<"the product is zero.";
    }

    
}