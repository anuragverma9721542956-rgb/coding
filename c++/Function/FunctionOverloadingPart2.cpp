#include<iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;
}
void fun(int x){
    cout<<"Good Morning"<<endl;
}
void fun(double x){
    cout<<"Kaise ho anurag";
}
int main(){
    fun();
    fun(9);
    fun(4.5);
    
}