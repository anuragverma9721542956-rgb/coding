#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the numbers : ";
    cin>>a>>b;
    if((a%2==0&&b%2!=0)||(a%2!=0&&b%2==0)){
        cout<<"one is odd.";

    }

    else if(a%2!=0&&b%2!=0){
       cout<<"Both are Odd";
    }
    else{
        cout<<"chutiya ho aap";
    }
}