#include<iostream>
using namespace std;
int main(){
    int m=5;
   
    // int* p1 = &m;
    // int*p2 = &m;

    
   
    // cout<<p1<<" "<<&p1<<endl;
    // cout<<p2<<" "<<&p2<<endl;
    int* ptr = &m;
    cout<<m<<endl;
    // change the value of m
    *ptr = 45;
    cout<<m;
    

}