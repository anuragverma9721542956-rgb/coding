#include<iostream>
using namespace std;
int x=10;//global variable that never change the main function variable
void fun(){
  x=84;
}
int main(){
    int x=80;
    cout<<x<<endl;
    fun();
    cout<<x<<endl;

}