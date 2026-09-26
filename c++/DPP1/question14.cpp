#include<iostream>
using namespace std;
int main(){
    int a,r;
    cout<<"Enter the the side of square : ";
    cin>>a;
    cout<<"Enter the radius of circle : ";
    cin>>r;
    cout<< " The area of Square is  : "<<a*a;
    cout<<"The area of circle :"<<(3.14*r*r);
    cout<<"The shaded region :"<<((a*a)-(3.14*r*r));
}