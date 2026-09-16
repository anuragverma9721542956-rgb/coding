#include<iostream>
using namespace std;
int main(){
    cout<<"Enter cost price  : ";
    int cp;
    cin>>cp;
    cout<<"Enter the selling price : ";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"the seller got profit : "<<sp-cp;

    }

    if(sp<cp){
        cout<<"the seller got lost : "<<cp-sp;
    }
        if(sp==cp){
        cout<<"the seller get no profit no loss : "<<sp-cp;
    }

} 