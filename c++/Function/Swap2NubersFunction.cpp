#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;

}
int main(){
    int a=5,b=8;
    swap(a,b);
    // swap(a,b); built in function
    cout<<a<<" "<<b;



}