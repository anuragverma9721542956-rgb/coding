#include<iostream>
using namespace std;
int main(){
    double m,d,t;
    
    cout<<"Enter the marked price : ";
    cin>>m;
    cout<<"Enter the discount  : ";
    cin>>d;
    cout<<"Enter the charge of tex(%) : ";
    cin>>t;
    double Discountedprice = m-(d/100)*m;
    double Finalprice = Discountedprice*(1+t/100);
    cout<<Finalprice;

  
}