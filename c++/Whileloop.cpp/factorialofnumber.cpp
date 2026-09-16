#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a  number :  ";
    cin>>n;
    long long product=1;
    for(int i=1;i<=n;i++){
        product*=i;
        
    }
    cout<<"The Factrial of number is : "<< product;
}