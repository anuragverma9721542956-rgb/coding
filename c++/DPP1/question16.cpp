#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    int remainder = n%7;
    int added_value = (7-remainder)%7;
    cout<<"Output : "<<added_value;

  
}