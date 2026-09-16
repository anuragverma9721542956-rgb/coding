#include<iostream>
using namespace std;
int x=6;//global variable
void fun(){
  x=24;
}
int main(){
    cout<<x<<endl;
    fun();
    cout<<x<<endl;

}