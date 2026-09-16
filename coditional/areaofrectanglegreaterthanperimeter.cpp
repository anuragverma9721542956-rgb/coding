#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the length of rectangle : ";
    int length;
    cin>>length;
    cout<<"Enter the breadth of rectangle : ";
    int breadth;
    cin>>breadth;

    int area = length*breadth;
    cout<<"The area of the rectangle is :  "<< area << endl;

    int perimeter = 2*(length+breadth);
    cout<<"The perimeter of the rectangle is :  "<< perimeter<<endl;


    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }
    else{
        cout<<"perimeter is greater than area";
    }



}